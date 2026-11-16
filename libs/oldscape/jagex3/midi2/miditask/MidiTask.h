// libs/oldscape/jagex3/midi2/miditask/MidiTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::midi2 {
    class MidiTask {
    public:
        // virtual methods in vtable order
        virtual ~MidiTask();
        virtual void __pure_slot_2() = 0;
        virtual SwitchedSong();
        GetCompletionTask();
        HasError();
        MidiTask* GetErrorMessage();
        MidiTask(shared_ptr<MidiTask> const&);
        void RaiseError(eastl::string const&);

        // data members, from how the methods use this: 96 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 m_hasError; // offset 88
        undefined1 field_89;   // offset 89
        char _unknown_90[6];
    };

    // 0x10011ac80: the linker folded this into LocInfo::GetLocType() const, which has identical code
    MidiTask::GetCompletionTask();

    // 0x10011cd30: the linker folded this into configdecoder::NPCTypeCustomisation::UsePlayerModel() const, which has identical code
    MidiTask::HasError();

    // 0x1002ce400, 112 bytes, inline, placed by class name and debug map
    // MidiTask::GetErrorMessage()
    MidiTask* MidiTask::GetErrorMessage() {
        undefined8 uVar1;
        undefined8 uVar2;

        new (this) eastl::string();
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::append_sprintf((char*)this, "Error in task : %s, Error message : %s", uVar1, uVar2);
        return this;
    }

    // 0x1002d8db0, 176 bytes, base-object constructor, inline, placed by class name
    // MidiTask::MidiTask(shared_ptr<MidiTask> const&)
    void MidiTask::MidiTask(shared_ptr* param_1) {
        allocator local_28[8];

        field_0 = PTR_vtable_100ee8948 + 16;
        new (&field_8, param_1) shared_ptr<dash3d::Decor>();
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_24, "", local_28) eastl::string();
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_56, "", local_28) eastl::string();
        m_hasError = 0;
        field_89 = 0;
    }

    // 0x1002d8e60, 128 bytes, base-object destructor, inline, placed by class name
    // MidiTask::~MidiTask()
    void MidiTask::~MidiTask() {
        field_0 = PTR_vtable_100ee8948 + 16;
        shared_ptr<MidiTask>::reset();
        (&field_56)->~basic_string();
        (&field_24)->~basic_string();
        (&field_8)->~shared_ptr();
    }

    // 0x1002d95d0, 32 bytes, inline, placed by class name
    // MidiTask::RaiseError(eastl::string const&)
    void MidiTask::RaiseError(basic_string* param_1) {
        m_hasError = 1;
        eastl::string::operator=((eastl::string*)&field_24, param_1);
    }

    // 0x1002d99e0, 16 bytes, inline, placed by class name
    // MidiTask::SwitchedSong()
    undefined1 MidiTask::SwitchedSong() {
        return field_89;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    MidiTask::~MidiTask();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    MidiTask::~MidiTask();

} // namespace jag::oldscape::midi2
