// libs/hal/taskrunner/task.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Task {
    public:
        // virtual methods in vtable order
        virtual ~Task();
        virtual void Run();
        virtual void OnInterval(float, unsigned long long);
        virtual void OnMessage(PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual void OnComplete();
        virtual void OnResponse(PacketT<Array<unsigned char, eastl::allocator>>&);
        Task(TaskThreadPriority);
        IsReady() const;
        GetId() const;
        void RunWrapper();
        IsTaskJoining() const;
        GetNextMessage();
        void OnReady();
        void Message(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);
        void Notify();
        void Join();
        void ReleaseThread();
        void Wait(unsigned long long);
        void EndTask();
        void SetInterval(int);
        void DoInterval();
        void Response(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);
        void SetTaskName(char const*);
        bool StartTask<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(
            TaskRunner*, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&&);
        void SetComplete(bool);
        void SetReady(bool);

        // data members, from how the methods use this: 296 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        undefined8 m_id;     // offset 40
        shared_ptr field_48; // offset 48
        char _unknown_64[112];
        TaskRunner* field_176;    // offset 176
        undefined1 field_184;     // offset 184
        undefined1 m_taskJoining; // offset 185
        bool m_ready;             // offset 186
        bool m_complete;          // offset 187
        undefined1 field_188;     // offset 188
        char _unknown_189[3];
        int m_interval; // offset 192
        char _unknown_196[4];
        ulonglong field_200;  // offset 200
        undefined8 field_208; // offset 208
        int field_216;        // offset 216
        char _unknown_220[76];
    };

    // 0x10019c490, 256 bytes, base-object constructor, inline, placed by class name and debug map
    // Task::Task(TaskThreadPriority)
    void Task::Task(undefined8 param_2) {
        undefined4 uVar2;

        uVar2 = (undefined4)((ulong)param_2 >> 32);
        field_0 = &PTR__Task_100f24f18;
        new (&field_8) eastl::string();
        new (&m_id) std::__thread_id();
        new (field_48, (_func_decltype_nullptr*)CONCAT44(uVar2)
                           shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>((int)param_2));
        new (&field_64) std::condition_variable();
        new (&field_112) std::mutex();
        field_176 = (TaskRunner*)0;
        field_184 = 1;
        m_taskJoining = 0;
        m_ready = false;
        m_complete = false;
        field_188 = 0;
        m_interval = -1;
        field_200 = 0;
        field_208 = 0;
        field_216 = (int)param_2;
        new (&field_224) std::mutex();
        new (&field_288) eastl::fixed_queue<TaskMessage, 1ul, true>();
    }

    // 0x10019c610, 96 bytes, base-object destructor, inline, placed by class name and debug map
    // Task::~Task()
    void Task::~Task() {
        field_0 = &PTR__Task_100f24f18;
        (&field_288)->~fixed_queue();
        (&field_224)->~mutex();
        (&field_112)->~mutex();
        (&field_64)->~condition_variable();
        field_48->~shared_ptr();
        (&field_8)->~basic_string();
    }

    // 0x1009e8260, 16 bytes, inline, placed by class name
    // Task::IsReady() const
    undefined1 Task::IsReady() {
        return m_ready;
    }

    // 0x100afc510, 16 bytes, inline, placed by class name
    // Task::IsTaskJoining() const
    undefined1 Task::IsTaskJoining() {
        return m_taskJoining;
    }

    // 0x100afd8b0, 16 bytes, inline, placed by class name
    // Task::SetTaskName(char const*)
    void Task::SetTaskName(char* param_1) {
        (&field_8, param_1)->assign();
    }

    // 0x100afd8c0, 272 bytes, inline, placed by class name
    // bool Task::StartTask<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(TaskRunner*, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&&)
    bool Task::StartTask<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0>(TaskRunner* param_1,
                                                                                             __0* param_2) {
        thread* this_00;
        undefined8 uVar2;
        jag local_30[8];
        shared_ptr local_28;

        m_complete = false;
        field_176 = param_1;
        if (field_216 == 1) {
            MakeRealTimeThread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0>(local_30, param_2);
            make_shared<std::thread, std::thread>((jag*)&local_28, (thread*)local_30);
            shared_ptr<std::thread>::operator=((shared_ptr<std::thread>*)field_48, &local_28);
            local_28.~shared_ptr();
            local_30->~thread();
        } else {
            make_shared<std::thread, (char const*)->AddTaskImpl(shared_ptr<Task> const&)::__0>((jag*)&local_28,
                                                                                               param_2);
            shared_ptr<std::thread>::operator=((shared_ptr<std::thread>*)field_48, &local_28);
            local_28.~shared_ptr();
        }
        if (!operator!=((shared_ptr*)field_48, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Thread != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/task.h",
                      127, (char*)0);
        }
        this_00 = (thread*)shared_ptr<std::thread>::operator->((shared_ptr<std::thread>*)field_48);
        uVar2 = std::thread::get_id(this_00);
        m_id = uVar2;
        return SUB81(uVar2, 0);
    }

    // 0x100afdbc0, 16 bytes, inline, placed by class name
    // Task::SetComplete(bool)
    void Task::SetComplete(bool param_1) {
        m_complete = param_1;
    }

    // 0x100afdbd0, 32 bytes, deleting destructor, inline, placed by class name
    // Task::~Task()
    void Task::~Task() {
        ~Task(this);
        operator_delete(this);
    }

    // 0x100b028a0, 16 bytes, inline, placed by class name
    // Task::SetReady(bool)
    void Task::SetReady(bool param_1) {
        m_ready = param_1;
    }

} // namespace jag
