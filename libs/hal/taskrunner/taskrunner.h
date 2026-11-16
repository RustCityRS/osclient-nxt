// libs/hal/taskrunner/taskrunner.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class TaskRunner {
    public:
        shared_ptr<Js5WorkerThread> AddTask<Js5WorkerThread>(const char* str,
                                                             const shared_ptr<Js5WorkerThread>& js5WorkerThread);
        uint8_t DeclareTask(const char* str1, const char* str2, std::function<Task*()> const& callback);
        shared_ptr<oldscape::sound::PCMPlayer::PlayerTask> AddTask<oldscape::sound::PCMPlayer::PlayerTask>(
            const char* str, const shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>& playerTask);
        void RemoveTask<oldscape::sound::PCMPlayer::PlayerTask>(
            const shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>& playerTask);
        void Response(Task* task, shared_ptr<PacketT<Array<unsigned char>>>& arg2);
        TaskRunner();
        ~TaskRunner();
        long GetTaskFactory(const char* str) const;
        void Service();
        void ShutdownTasks();
        bool AddTaskImpl(const char* str, const shared_ptr<Task>& task);
        void ContinueTaskRun(const shared_ptr<Task>& task);
        shared_ptr<MixerWorker> AddTask<MixerWorker>(const char* str, const shared_ptr<MixerWorker>& mixerWorker);
        shared_ptr<VorbisWorker> AddTask<VorbisWorker>(const char* str, const shared_ptr<VorbisWorker>& vorbisWorker);

    private:
        pair<eastl::string, std::function<Task*()>>* field_0;
        pair<eastl::string, std::function<Task*()>>* field_8;
        uint8_t _unknown_16[296];
    };

    // 0x10019b850
    shared_ptr<Js5WorkerThread>
    TaskRunner::AddTask<Js5WorkerThread>(const char* str, const shared_ptr<Js5WorkerThread>& js5WorkerThread) {
        shared_ptr<oldscape::dash3d::GroundDecor>* in_RCX;

        shared_ptr<oldscape::dash3d::Decor> local_40(in_RCX);
        bool cVar1 = AddTaskImpl((TaskRunner*)str, (char*)js5WorkerThread, &local_40);
        if (!cVar1) {
            new (this) shared_ptr();
        } else {
            new (this) shared_ptr(in_RCX);
        }
        return this;
    }

    // 0x10019b8e0
    shared_ptr_if_not_array<Js5WorkerThread>::type make_shared<Js5WorkerThread>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        Js5WorkerThread* local_28[2];

        auto arg1 = aligned_alloc(960, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<Js5WorkerThread>::type result;
        } else {
            local_28[0] = placement_new<Js5WorkerThread>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<Js5WorkerThread>, int, Js5WorkerThread*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1001c3530
    uint8_t TaskRunner::DeclareTask(const char* str1, const char* str2, std::function<Task*()> const& callback) {
        function<Task*()>* this_00;

        eastl::string local_58(str1);
        this_00 = (function<Task*()>*)(*this)[local_58];
        *this_00 = callback;
        return 1;
    }

    // 0x10029fd60
    shared_ptr<oldscape::sound::PCMPlayer::PlayerTask> TaskRunner::AddTask<oldscape::sound::PCMPlayer::PlayerTask>(
        const char* str, const shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>& playerTask) {
        shared_ptr<oldscape::dash3d::GroundDecor>* in_RCX;

        shared_ptr<oldscape::dash3d::Decor> local_40(in_RCX);
        bool cVar1 = AddTaskImpl((TaskRunner*)str, (char*)playerTask, &local_40);
        if (!cVar1) {
            new (this) shared_ptr();
        } else {
            new (this) shared_ptr(in_RCX);
        }
        return this;
    }

    // 0x1002a0060
    void TaskRunner::RemoveTask<oldscape::sound::PCMPlayer::PlayerTask>(
        const shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>& playerTask) {
        scoped_lock<std::mutex> local_20(field_40);
        auto pTVar1 = playerTask.operator->();
        pTVar1->GetId();
        eastl::vector_map<std::__thread_id, shared_ptr<Task>>::erase(field_104);
        pTVar1 = (Task*)playerTask.operator->();
        pTVar1->Join();
    }

    // 0x100afdca0
    TaskRunner::~TaskRunner() {
        field_304.~queue();
        (&field_240)->~mutex();
        field_208.~vector();
        (&field_144)->~mutex();
        field_104.~vector_map();
        (&field_40)->~mutex();
    }

    // 0x100afe050
    TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::~$_0() {
        ((this + 8))->~shared_ptr();
    }

    // 0x100b025f0
    TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::$_0(const $_0& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) shared_ptr((arg1 + 8));
        *(uint64_t*)(this + 24) = *(uint64_t*)(arg1 + 24);
    }

    // 0x100b02760
    TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::$_0($_0&& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) shared_ptr((arg1 + 8));
        *(uint64_t*)(this + 24) = *(uint64_t*)(arg1 + 24);
    }

    // 0x100b02850
    void TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::operator()() const {
        TaskRunner* this_00 = *(TaskRunner**)this;
        ((Task*)(*((this + 8))).operator->())->SetReady(true);
        this_thread::SetThreadName(*(char**)(this + 24));
        ContinueTaskRun(this_00, (shared_ptr<Task>*)(this + 8));
    }

    // 0x100b8e8a0
    shared_ptr<MixerWorker> TaskRunner::AddTask<MixerWorker>(const char* str,
                                                             const shared_ptr<MixerWorker>& mixerWorker) {
        shared_ptr<oldscape::dash3d::GroundDecor>* in_RCX;

        shared_ptr<oldscape::dash3d::Decor> local_40(in_RCX);
        bool cVar1 = AddTaskImpl((TaskRunner*)str, (char*)mixerWorker, &local_40);
        if (!cVar1) {
            new (this) shared_ptr();
        } else {
            new (this) shared_ptr(in_RCX);
        }
        return this;
    }

    // 0x100b90f50
    shared_ptr<VorbisWorker> TaskRunner::AddTask<VorbisWorker>(const char* str,
                                                               const shared_ptr<VorbisWorker>& vorbisWorker) {
        shared_ptr<oldscape::dash3d::GroundDecor>* in_RCX;

        shared_ptr<oldscape::dash3d::Decor> local_40(in_RCX);
        bool cVar1 = AddTaskImpl((TaskRunner*)str, (char*)vorbisWorker, &local_40);
        if (!cVar1) {
            new (this) shared_ptr();
        } else {
            new (this) shared_ptr(in_RCX);
        }
        return this;
    }

} // namespace jag
