// libs/hal/taskrunner/taskrunner.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class TaskRunner {
    public:
        shared_ptr<Js5WorkerThread> AddTask<Js5WorkerThread>(char const*, shared_ptr<Js5WorkerThread> const&);
        DeclareTask(char const*, char const*, std::function<Task*()> const&);
        shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>
        AddTask<oldscape::sound::PCMPlayer::PlayerTask>(char const*,
                                                        shared_ptr<oldscape::sound::PCMPlayer::PlayerTask> const&);
        void
        RemoveTask<oldscape::sound::PCMPlayer::PlayerTask>(shared_ptr<oldscape::sound::PCMPlayer::PlayerTask> const&);
        void Response(Task*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);
        TaskRunner();
        ~TaskRunner();
        long GetTaskFactory(char const*) const;
        void Service();
        void ShutdownTasks();
        bool AddTaskImpl(char const*, shared_ptr<Task> const&);
        void ContinueTaskRun(shared_ptr<Task> const&);
        shared_ptr<MixerWorker> AddTask<MixerWorker>(char const*, shared_ptr<MixerWorker> const&);
        shared_ptr<VorbisWorker> AddTask<VorbisWorker>(char const*, shared_ptr<VorbisWorker> const&);

        // data members, from how the methods use this: 312 bytes
        pair* field_0; // offset 0
        pair* field_8; // offset 8
        char _unknown_16[296];
    };

    // 0x10019b850, 144 bytes, inline, placed by class name and debug map
    // shared_ptr<Js5WorkerThread> TaskRunner::AddTask<Js5WorkerThread>(char const*, shared_ptr<Js5WorkerThread> const&)
    shared_ptr* TaskRunner::AddTask<Js5WorkerThread>(shared_ptr* __return_storage_ptr__, TaskRunner* this,
                                                     char* param_1, shared_ptr* param_2) {
        char cVar1;
        shared_ptr local_40;

        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(param_2);
        cVar1 = AddTaskImpl(this, param_1, &local_40);
        local_40.~shared_ptr();
        if (cVar1 == '\0') {
            new (__return_storage_ptr__) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        } else {
            new (__return_storage_ptr__) shared_ptr<oldscape::dash3d::Decor>(param_2);
        }
        return __return_storage_ptr__;
    }

    // 0x10019b8e0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Js5WorkerThread>::type make_shared<Js5WorkerThread>()
    jag* make_shared<Js5WorkerThread>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        Js5WorkerThread* local_28[2];

        pvVar1 = (void*)aligned_alloc(960, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<Js5WorkerThread>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<Js5WorkerThread>, int, Js5WorkerThread*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1001c3530, 144 bytes, inline, placed by class name
    // TaskRunner::DeclareTask(char const*, char const*, std::function<Task* ()> const&)
    /* TaskRunner::DeclareTask(char const*, char const*, std::function<Task* ()> const&) */

    undefined1 TaskRunner::DeclareTask(char* param_1, char* param_2, function* param_3) {
        function<Task*()>* this_00;
        eastl::string local_58[32];
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, param_1, local_38);
        this_00 = (function<Task*()>*)
            eastl::vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                              eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>::
            operator[](
                (vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                            eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>*)this,
                (basic_string*)local_58);
        std::function<Task*()>::operator=(this_00, param_3);
        eastl::string::~basic_string(local_58);
        return 1;
    }

    // 0x10029fd60, 144 bytes, inline, placed by class name
    // shared_ptr<oldscape::sound::PCMPlayer::PlayerTask> TaskRunner::AddTask<oldscape::sound::PCMPlayer::PlayerTask>(char const*, shared_ptr<oldscape::sound::PCMPlayer::PlayerTask> const&)
    shared_ptr* TaskRunner::AddTask<oldscape::sound::PCMPlayer::PlayerTask>(shared_ptr* __return_storage_ptr__,
                                                                            TaskRunner* this, char* param_1,
                                                                            shared_ptr* param_2) {
        char cVar1;
        shared_ptr local_40;

        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(param_2);
        cVar1 = AddTaskImpl(this, param_1, &local_40);
        local_40.~shared_ptr();
        if (cVar1 == '\0') {
            new (__return_storage_ptr__) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        } else {
            new (__return_storage_ptr__) shared_ptr<oldscape::dash3d::Decor>(param_2);
        }
        return __return_storage_ptr__;
    }

    // 0x1002a0060, 128 bytes, inline, placed by class name
    // void TaskRunner::RemoveTask<oldscape::sound::PCMPlayer::PlayerTask>(shared_ptr<oldscape::sound::PCMPlayer::PlayerTask> const&)
    void TaskRunner::RemoveTask<oldscape::sound::PCMPlayer::PlayerTask>(shared_ptr* param_1) {
        Task* pTVar1;
        undefined8 local_28;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_40);
        pTVar1 = (Task*)shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>::operator->(
            (shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>*)param_1);
        local_28 = pTVar1->GetId();
        (&field_104, (__thread_id*)&local_28)->erase();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        pTVar1 = (Task*)shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>::operator->(
            (shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>*)param_1);
        pTVar1->Join();
    }

    // 0x100afcec0, 16 bytes, complete-object destructor, inline, placed by class name
    // TaskRunner::~TaskRunner(): jumps straight to the base-object destructor

    // 0x100afd9d0, 16 bytes, complete-object destructor, inline, placed by class name
    // TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::~$_0(): jumps straight to the base-object destructor

    // 0x100afdca0, 96 bytes, base-object destructor, inline, placed by class name
    // TaskRunner::~TaskRunner()
    void TaskRunner::~TaskRunner() {
        (&field_304)->~queue();
        (&field_240)->~mutex();
        (&field_208)->~vector();
        (&field_144)->~mutex();
        (&field_104)->~vector_map();
        (&field_40)->~mutex();
        eastl::vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                          eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>::
            ~vector_map(
                (vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                            eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>*)this);
    }

    // 0x100afe050, 16 bytes, base-object destructor, inline, placed by class name
    // TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::~$_0()
    /* ~$_0() */

    void TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::~__0() {
        ((this + 8))->~shared_ptr();
    }

    // 0x100b025e0, 16 bytes, complete-object constructor, inline, placed by class name
    // TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::$_0($_0 const&): jumps straight to the base-object constructor

    // 0x100b025f0, 48 bytes, base-object constructor, inline, placed by class name
    // TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::$_0($_0 const&)
    /* $_0($_0 const&) */

    void TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::__0(__0* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
    }

    // 0x100b02750, 16 bytes, complete-object constructor, inline, placed by class name
    // TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::$_0($_0&&): jumps straight to the base-object constructor

    // 0x100b02760, 48 bytes, base-object constructor, inline, placed by class name
    // TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::$_0($_0&&)
    /* $_0($_0&&) */

    void TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::__0(__0* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
    }

    // 0x100b02850, 80 bytes, inline, placed by class name
    // TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::operator()() const
    /* TaskRunner::AddTaskImpl(char const*, shared_ptr<Task>
   const&)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    void TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::operator()() {
        TaskRunner* this_00;
        Task* this_01;

        this_00 = *(TaskRunner**)this;
        this_01 = (Task*)shared_ptr<Task>::operator->((shared_ptr<Task>*)(this + 8));
        this_01->SetReady(true);
        this_thread::SetThreadName(*(char**)(this + 24));
        ContinueTaskRun(this_00, (shared_ptr*)(this + 8));
    }

    // 0x100b8e8a0, 144 bytes, inline, placed by class name
    // shared_ptr<MixerWorker> TaskRunner::AddTask<MixerWorker>(char const*, shared_ptr<MixerWorker> const&)
    shared_ptr* TaskRunner::AddTask<MixerWorker>(shared_ptr* __return_storage_ptr__, TaskRunner* this, char* param_1,
                                                 shared_ptr* param_2) {
        char cVar1;
        shared_ptr local_40;

        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(param_2);
        cVar1 = AddTaskImpl(this, param_1, &local_40);
        local_40.~shared_ptr();
        if (cVar1 == '\0') {
            new (__return_storage_ptr__) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        } else {
            new (__return_storage_ptr__) shared_ptr<oldscape::dash3d::Decor>(param_2);
        }
        return __return_storage_ptr__;
    }

    // 0x100b90f50, 144 bytes, inline, placed by class name
    // shared_ptr<VorbisWorker> TaskRunner::AddTask<VorbisWorker>(char const*, shared_ptr<VorbisWorker> const&)
    shared_ptr* TaskRunner::AddTask<VorbisWorker>(shared_ptr* __return_storage_ptr__, TaskRunner* this, char* param_1,
                                                  shared_ptr* param_2) {
        char cVar1;
        shared_ptr local_40;

        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(param_2);
        cVar1 = AddTaskImpl(this, param_1, &local_40);
        local_40.~shared_ptr();
        if (cVar1 == '\0') {
            new (__return_storage_ptr__) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        } else {
            new (__return_storage_ptr__) shared_ptr<oldscape::dash3d::Decor>(param_2);
        }
        return __return_storage_ptr__;
    }

} // namespace jag
