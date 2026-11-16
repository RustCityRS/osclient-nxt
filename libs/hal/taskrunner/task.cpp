// libs/hal/taskrunner/task.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.taskrunner

#include "task.h"

namespace jag {
    // 0x1002a8580: the linker folded this into oldscape::sound::PCMPlayer::PlayerTask::~PlayerTask(), which has identical code
    Task::~Task();

    // 0x100afc4a0, 16 bytes, placed by class name and debug map
    // Task::GetId() const
    undefined8 Task::GetId() {
        return m_id;
    }

    // 0x100afc4b0, 96 bytes, placed by class name and debug map
    // Task::RunWrapper()
    void Task::RunWrapper() {
        BucketManager::Init(16, 0);
        while (true) {
            if (IsTaskJoining(this) != '\0')
                break;
            (*(code*)field_0[2])(this);
            if ((field_184 != '\0') || (field_188 != '\0'))
                break;
        }
        BucketManager::PrintMetrics();
    }

    // 0x100afc520, 160 bytes, placed by class name and debug map
    // Task::Run()
    void Task::Run() {
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        undefined8 uVar1;
        char cVar2;
        undefined1 local_28[16];

        field_184 = 0;
        cVar2 = IsTaskJoining(this);
        if (cVar2 == '\0') {
            do {
                GetNextMessage((Task*)local_28);
                if (local_28->operator_cast_to_bool()) {
                    this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                  shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_28);
                    this_00->SetPos(0);
                    uVar1 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_28);
                    (*(code*)field_0[4])(this, uVar1);
                }
                local_28->~shared_ptr();
                cVar2 = IsTaskJoining(this);
            } while (cVar2 == '\0');
        }
    }

    // 0x100afc5c0, 368 bytes, placed by class name and debug map
    // Task::GetNextMessage()
    Task* Task::GetNextMessage() {
        undefined1* this_00;
        int iVar1;
        char cVar2;
        ulonglong uVar3;
        TaskMessage* pTVar5;
        shared_ptr* psVar6;
        Task* in_RSI;
        TaskMessage local_48;
        scoped_lock<std::mutex> local_30[8];

        uVar3 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
        this_00 = &in_RSI->field_288;
        cVar2 = this_00->empty();
        if (cVar2 != '\0') {
            Wait(in_RSI, uVar3);
        }
        in_RSI->field_188 = 0;
        iVar1 = in_RSI->m_interval;
        if ((long)iVar1 < 1) {
            if (iVar1 == 0) {
                DoInterval(in_RSI);
                in_RSI->field_188 = 1;
            }
        } else if ((ulong)in_RSI->field_208 <= uVar3) {
            in_RSI->field_208 = SystemTimer::ConvertMStoNS((long)iVar1) + uVar3;
            (*(code*)in_RSI->field_0[3])((float)(uVar3 - in_RSI->field_200) * 1e-09);
            in_RSI->field_188 = 1;
            in_RSI->field_200 = uVar3;
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&in_RSI->field_224);
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            pTVar5 = (TaskMessage*)
                eastl::queue<TaskMessage, eastl::fixed_list<TaskMessage, 1ul, true, eastl::allocator>>::front();
            new (&local_48) TaskMessage(pTVar5);
            this_00->pop();
            psVar6 = (shared_ptr*)local_48.second();
            new (this) shared_ptr<oldscape::dash3d::Decor>(psVar6);
            local_48.~pair();
        } else {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return this;
    }

    // 0x100afc730, 16 bytes, placed by class name and debug map
    // Task::OnReady()
    void Task::OnReady() {}

    // 0x100afc740, 80 bytes, placed by class name and debug map
    // Task::OnInterval(float, unsigned long long)
    void Task::OnInterval(float param_1, ulonglong param_2) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.cpp", 67,
            "SetInterval(%d) used, but no OnInterval handler defined", CONCAT44(uVar2, m_interval));
    }

    // 0x100afc790, 80 bytes, placed by class name and debug map
    // Task::OnMessage(PacketT<Array<unsigned char, eastl::allocator> >&)
    void Task::OnMessage(PacketT* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.cpp", 75,
            "%s called with no OnMessage handler", "OnMessage");
    }

    // 0x100afc7e0, 16 bytes, placed by class name and debug map
    // Task::OnComplete()
    void Task::OnComplete() {}

    // 0x100afc7f0, 80 bytes, placed by class name and debug map
    // Task::OnResponse(PacketT<Array<unsigned char, eastl::allocator> >&)
    void Task::OnResponse(PacketT* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.cpp", 90,
            "%s called with no OnResponse handler", "OnResponse");
    }

    // 0x100afc840, 144 bytes, placed by class name and debug map
    // Task::Message(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    void Task::Message(shared_ptr* param_1) {
        TaskMessage local_38;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_224);
        new (&local_38) TaskMessage(this, param_1);
        (&field_288, &local_38)->push();
        local_38.~pair();
        Notify();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100afc910, 16 bytes, placed by class name
    // Task::Notify()
    void Task::Notify() {
        std::condition_variable::notify_one();
    }

    // 0x100afc920, 96 bytes, placed by class name
    // Task::Join()
    void Task::Join() {
        undefined1* this_00;
        thread* this_01;

        m_taskJoining = 1;
        this_00 = field_48;
        if (operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            this_01 = (thread*)shared_ptr<std::thread>::operator->((shared_ptr<std::thread>*)this_00);
            if (std::thread::joinable(this_01) != '\0') {
                Notify();
                shared_ptr<std::thread>::operator->((shared_ptr<std::thread>*)this_00);
                std::thread::join();
                shared_ptr<std::thread>::reset();
            }
        }
    }

    // 0x100afca20, 80 bytes, placed by class name
    // Task::ReleaseThread()
    void Task::ReleaseThread() {
        thread* this_00;
        undefined1* this_01;

        this_01 = field_48;
        if (this_01->operator_cast_to_bool()) {
            this_00 = (thread*)shared_ptr<std::thread>::operator->((shared_ptr<std::thread>*)this_01);
            if (std::thread::joinable(this_00) != '\0') {
                shared_ptr<std::thread>::operator->((shared_ptr<std::thread>*)this_01);
                std::thread::detach();
            }
            shared_ptr<std::thread>::reset();
        }
    }

    // 0x100afca70, 176 bytes, placed by class name
    // Task::Wait(unsigned long long)
    void Task::Wait(ulonglong param_1) {
        duration local_40[8];
        long local_38;
        unique_lock<std::mutex> local_30[16];

        if (m_interval < 1) {
            if (m_interval == 0)
                goto LAB_100afcafc;
            std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)&field_112);
            std::condition_variable::wait((unique_lock*)&field_64);
        } else {
            local_38 = field_208 - param_1;
            if ((ulong)field_208 < param_1 || local_38 == 0) {
            LAB_100afcafc:
                std::this_thread::yield();
                return;
            }
            std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)&field_112);
            std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<unsigned long long>(
                (ulonglong*)local_40, (type*)&local_38);
            std::condition_variable::wait_for<long long, std::ratio<1l, 1000000000l>>((condition_variable*)&field_64,
                                                                                      (unique_lock*)local_30, local_40);
        }
        std::unique_lock<std::mutex>::~unique_lock(local_30);
    }

    // 0x100afcc80, 32 bytes, placed by class name
    // Task::EndTask()
    void Task::EndTask() {
        m_taskJoining = 1;
        m_complete = true;
    }

    // 0x100afcca0, 64 bytes, placed by class name
    // Task::SetInterval(int)
    void Task::SetInterval(int param_1) {
        if (param_1 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("milliseconds >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.cpp",
                      170, (char*)0);
        }
        m_interval = param_1;
    }

    // 0x100afcce0, 96 bytes, placed by class name
    // Task::DoInterval()
    void Task::DoInterval() {
        ulonglong uVar1;

        uVar1 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
        (*(code*)field_0[3])((float)(uVar1 - field_200) * 1e-09, this, uVar1);
        field_200 = uVar1;
    }

    // 0x100afcd80, 32 bytes, placed by class name
    // Task::Response(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    void Task::Response(shared_ptr* param_1) {
        (field_176, this, param_1)->Response();
    }

} // namespace jag
