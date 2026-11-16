// libs/hal/taskrunner/taskmessage.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class TaskMessage {
    public:
        GetTask();
        GetPacket();
        ~TaskMessage();
        TaskMessage();
        TaskMessage(TaskMessage&&);
        TaskMessage(Task*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);
        TaskMessage(TaskMessage const&);
        TaskMessage* operator=(TaskMessage&&);
        TaskMessage* operator=(TaskMessage const&);

        // data members, from how the methods use this: 16 bytes
        Task* field_0; // offset 0
        char _unknown_8[8];
    };

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    TaskMessage::GetTask();

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    TaskMessage::GetPacket();

    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    TaskMessage::~TaskMessage();

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    TaskMessage::~TaskMessage();

    // 0x1002f06f0: the linker folded this into oldscape::dash3d::RSevenModelLitRenderer::ActiveModel::ActiveModel(), which has identical code
    TaskMessage::TaskMessage();

    // 0x100325750: the linker folded this into oldscape::dash3d::RSevenModelLitRenderer::ActiveModel::ActiveModel(), which has identical code
    TaskMessage::TaskMessage();

    // 0x100426b40: the linker folded this into HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&&), which has identical code
    TaskMessage::TaskMessage(TaskMessage&&);

    // 0x100426b50: the linker folded this into HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&&), which has identical code
    TaskMessage::TaskMessage(TaskMessage&&);

    // 0x100afc900, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TaskMessage::TaskMessage(Task*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&): jumps straight to the base-object constructor

    // 0x100afcd60, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TaskMessage::TaskMessage(TaskMessage const&): jumps straight to the base-object constructor

    // 0x100afdc10, 32 bytes, base-object constructor, inline, placed by class name
    // TaskMessage::TaskMessage(Task*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    void TaskMessage::TaskMessage(Task* param_1, shared_ptr* param_2) {
        field_0 = param_1;
        new (&field_8, param_2) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x100afdc80, 32 bytes, base-object constructor, inline, placed by class name
    // TaskMessage::TaskMessage(TaskMessage const&)
    void TaskMessage::TaskMessage(TaskMessage* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (shared_ptr*)&param_1->field_8) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x100b009e0, 48 bytes, inline, placed by class name
    // TaskMessage::operator=(TaskMessage&&)
    /* TaskMessage::TEMPNAMEPLACEHOLDERVALUE(TaskMessage&&) */

    TaskMessage* TaskMessage::operator=(TaskMessage* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&field_8, (shared_ptr*)&param_1->field_8);
        return this;
    }

    // 0x100b00a90, 48 bytes, inline, placed by class name
    // TaskMessage::operator=(TaskMessage const&)
    /* TaskMessage::TEMPNAMEPLACEHOLDERVALUE(TaskMessage const&) */

    TaskMessage* TaskMessage::operator=(TaskMessage* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&field_8, (shared_ptr*)&param_1->field_8);
        return this;
    }

} // namespace jag
