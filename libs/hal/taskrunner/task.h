// libs/hal/taskrunner/task.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Task {
    public:
        // virtual methods in vtable order
        virtual ~Task();
        virtual void Run();
        virtual void OnInterval(float arg1, unsigned long long arg2);
        virtual void OnMessage(PacketT<Array<unsigned char>>& arg1);
        virtual void OnComplete();
        virtual void OnResponse(PacketT<Array<unsigned char>>& arg1);
        Task(TaskThreadPriority taskThreadPriority);
        bool IsReady() const;
        uint64_t GetId() const;
        void RunWrapper();
        bool IsTaskJoining() const;
        auto GetNextMessage();
        void OnReady();
        void Message(shared_ptr<PacketT<Array<unsigned char>>>& arg1);
        void Notify();
        void Join();
        void ReleaseThread();
        void Wait(unsigned long long arg1);
        void EndTask();
        void SetInterval(int arg1);
        void DoInterval();
        void Response(shared_ptr<PacketT<Array<unsigned char>>>& arg1);
        void SetTaskName(const char* str);
        bool StartTask<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(
            TaskRunner* taskRunner, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&& arg2);
        void SetComplete(bool arg1);
        void SetReady(bool arg1);

    private:
        uint8_t _unknown_8[32];
        uint64_t m_id;
        shared_ptr field_48;
        uint8_t _unknown_64[112];
        TaskRunner* field_176;
        uint8_t field_184;
        uint8_t m_taskJoining;
        bool m_ready;
        bool m_complete;
        uint8_t field_188;
        uint8_t _unknown_189[3];
        int field_192;
        uint8_t _unknown_196[4];
        unsigned long long field_200;
        unsigned long field_208;
        TaskThreadPriority field_216;
        uint8_t _unknown_220[76];
    };

    // 0x10019c490
    Task::Task(TaskThreadPriority taskThreadPriority)
        : field_176(nullptr), field_184(1), m_taskJoining(0), m_ready(false), m_complete(false), field_188(0),
          field_192(-1), field_200(0), field_208(0), field_216(taskThreadPriority) {}

    // 0x10019c610
    Task::~Task() {
        field_288.~fixed_queue();
        (&field_224)->~mutex();
        (&field_112)->~mutex();
        (&field_64)->~condition_variable();
        field_48->~shared_ptr();
        field_8.~basic_string();
    }

    // 0x1009e8260
    bool Task::IsReady() const {
        return m_ready;
    }

    // 0x100afc510
    bool Task::IsTaskJoining() const {
        return m_taskJoining;
    }

    // 0x100afd8b0
    void Task::SetTaskName(const char* str) {
        (&field_8)->assign(str);
    }

    // 0x100afd8c0
    bool Task::StartTask<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(
        TaskRunner* taskRunner, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&& arg2) {
        __0 local_30;
        ReturnValue local_28;

        m_complete = false;
        field_176 = taskRunner;
        if (field_216 == 1) {
            MakeRealTimeThread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0>(&local_30);
            make_shared<std::thread, std::thread>(&local_28, &local_30);
            *field_48 = local_28;
            std::thread::~thread(&local_30);
        } else {
            make_shared<std::thread, (char const*)->AddTaskImpl(shared_ptr<Task> const&)::__0>(&local_28, arg2);
            *field_48 = local_28;
        }
        if (!*field_48 != nullptr) {
            LogAssert("m_Thread != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.h",
                      127, nullptr);
        }
        uint64_t uVar2 = ((thread*)(*field_48).operator->())->get_id();
        m_id = uVar2;
        return (uint8_t)uVar2;
    }

    // 0x100afdbc0
    void Task::SetComplete(bool arg1) {
        m_complete = arg1;
    }

    // 0x100b028a0
    void Task::SetReady(bool arg1) {
        m_ready = arg1;
    }

} // namespace jag
