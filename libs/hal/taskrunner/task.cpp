// libs/hal/taskrunner/task.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.taskrunner

#include "task.h"

namespace jag {
    // 0x1002a8580: Task::~Task() has the same machine code as oldscape::sound::PCMPlayer::PlayerTask::~PlayerTask()

    // 0x100afc4a0
    uint64_t Task::GetId() const {
        return m_id;
    }

    // 0x100afc4b0
    void Task::RunWrapper() {
        BucketManager::Init(16, 0);
        while (true) {
            if (IsTaskJoining() != '\0')
                break;
            Run();
            if ((field_184 != '\0') || (field_188 != '\0'))
                break;
        }
        BucketManager::PrintMetrics();
    }

    // 0x100afc520
    void Task::Run() {
        shared_ptr local_28;

        field_184 = 0;
        bool cVar1 = IsTaskJoining();
        if (!cVar1) {
            do {
                GetNextMessage((ReturnValue*)&local_28, this);
                cVar1 = shared_ptr::operator_cast_to_bool(&local_28);
                if (cVar1) {
                    ((PacketT<Array<unsigned char>>*)local_28.operator->())->SetPos(0);
                    *local_28;
                    OnMessage();
                }
                cVar1 = IsTaskJoining();
            } while (!cVar1);
        }
    }

    // 0x100afc5c0
    auto Task::GetNextMessage() {
        TaskMessage* taskMessage;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        TaskMessage local_48;

        unsigned long long arg1 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        if (field_288.empty()) {
            Wait(arg1);
        }
        field_188 = 0;
        int iVar1 = field_192;
        if ((long)iVar1 < 1) {
            if (iVar1 == 0) {
                DoInterval();
                field_188 = 1;
            }
        } else if (field_208 <= arg1) {
            field_208 = SystemTimer::ConvertMStoNS((long)iVar1) + arg1;
            OnInterval((float)(arg1 - field_200) * 1e-09, (unsigned long long)this);
            field_188 = 1;
            field_200 = arg1;
        }
        scoped_lock<std::mutex> local_30(field_224);
        if (!(field_288.empty())) {
            taskMessage = (TaskMessage*)eastl::queue<TaskMessage, eastl::fixed_list<TaskMessage, 1ul>>::front();
            local_48 = TaskMessage(*taskMessage);
            eastl::queue<TaskMessage, eastl::fixed_list<TaskMessage, 1ul>>::pop();
            groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)local_48.second();
            auto result(groundDecor);
        } else {
            new (&result) shared_ptr();
        }
        return result;
    }

    // 0x100afc730
    void Task::OnReady() {}

    // 0x100afc740
    void Task::OnInterval(float arg1, unsigned long long arg2) {
        uint64_t in_RAX;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.cpp", 67,
                  "SetInterval(%d) used, but no OnInterval handler defined",
                  (((uint64_t)uVar1 << 32) | (uint32_t)field_192));
    }

    // 0x100afc790
    void Task::OnMessage(PacketT<Array<unsigned char>>& arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.cpp", 75,
                  "%s called with no OnMessage handler", "OnMessage");
    }

    // 0x100afc7e0
    void Task::OnComplete() {}

    // 0x100afc7f0
    void Task::OnResponse(PacketT<Array<unsigned char>>& arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.cpp", 90,
                  "%s called with no OnResponse handler", "OnResponse");
    }

    // 0x100afc840
    void Task::Message(shared_ptr<PacketT<Array<unsigned char>>>& arg1) {

        scoped_lock<std::mutex> local_20(field_224);
        TaskMessage local_38(this, arg1);
        field_288.push(local_38);
        Notify();
    }

    // 0x100afc910
    void Task::Notify() {
        std::condition_variable::notify_one();
    }

    // 0x100afc920
    void Task::Join() {
        m_taskJoining = 1;
        uint8_t* midiPlayerMainThread = field_48;
        if (*midiPlayerMainThread != nullptr) {
            if (((thread*)(*midiPlayerMainThread).operator->())->joinable() != '\0') {
                Notify();
                (*midiPlayerMainThread).operator->();
                std::thread::join();
                midiPlayerMainThread->reset();
            }
        }
    }

    // 0x100afca20
    void Task::ReleaseThread() {
        uint8_t* this_01 = field_48;
        if (this_01->operator_cast_to_bool()) {
            if (((thread*)(*this_01).operator->())->joinable()) {
                (*this_01).operator->();
                std::thread::detach();
            }
            this_01->reset();
        }
    }

    // 0x100afca70
    void Task::Wait(unsigned long long arg1) {
        type* arg2;
        duration<long long, std::ratio<1l, 1000000000l>> local_40;
        unsigned long long local_38;
        unique_lock<std::mutex> local_30;

        if (field_192 < 1) {
            if (field_192 == 0)
                goto LAB_100afcafc;
            local_30 = std::unique_lock<std::mutex>(field_112);
            std::condition_variable::wait((unique_lock*)&field_64);
        } else {
            local_38 = field_208 - arg1;
            if (field_208 < arg1 || local_38 == 0) {
            LAB_100afcafc:
                std::this_thread::yield();
                return;
            }
            local_30 = std::unique_lock<std::mutex>(field_112);
            local_40.duration<unsigned long long>(local_38, arg2);
            field_64.wait_for<long long, std::ratio<1l, 1000000000l>>(local_30, local_40);
        }
    }

    // 0x100afcc80
    void Task::EndTask() {
        m_taskJoining = 1;
        m_complete = true;
    }

    // 0x100afcca0
    void Task::SetInterval(int arg1) {
        if (arg1 < 0) {
            LogAssert("milliseconds >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.cpp",
                      170, nullptr);
        }
        field_192 = arg1;
    }

    // 0x100afcce0
    void Task::DoInterval() {
        unsigned long long uVar1 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        OnInterval((float)(uVar1 - field_200) * 1e-09, (unsigned long long)this);
        field_200 = uVar1;
    }

    // 0x100afcd80
    void Task::Response(shared_ptr<PacketT<Array<unsigned char>>>& arg1) {
        field_176->Response(this, arg1);
    }

} // namespace jag
