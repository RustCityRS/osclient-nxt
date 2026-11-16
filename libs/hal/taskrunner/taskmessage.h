// libs/hal/taskrunner/taskmessage.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class TaskMessage {
    public:
        void GetTask();
        void GetPacket();
        ~TaskMessage();
        TaskMessage();
        TaskMessage(TaskMessage&& modIconReference);
        TaskMessage(Task* task, shared_ptr<PacketT<Array<unsigned char>>>& arg2);
        TaskMessage(const TaskMessage& taskMessage);
        TaskMessage* operator=(TaskMessage&& taskMessage);
        TaskMessage* operator=(const TaskMessage& taskMessage);

    private:
        Task* field_0;
        uint8_t _unknown_8[8];
    };

    // 0x100009d10: TaskMessage::GetTask() has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100009d50: TaskMessage::GetPacket() has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x10011c9a0: TaskMessage::~TaskMessage() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

    // 0x10012a760: TaskMessage::~TaskMessage() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

    // 0x100325750: TaskMessage::TaskMessage() has the same machine code as oldscape::dash3d::RSevenModelLitRenderer::ActiveModel::ActiveModel()

    // 0x100426b50: TaskMessage::TaskMessage(TaskMessage&&) has the same machine code as HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&&)

    // 0x100afdc10
    TaskMessage::TaskMessage(Task* task, shared_ptr<PacketT<Array<unsigned char>>>& arg2)
        : field_0(task), field_8(arg2) {}

    // 0x100afdc80
    TaskMessage::TaskMessage(const TaskMessage& taskMessage)
        : field_0(taskMessage.field_0), field_8(&taskMessage.field_8) {}

    // 0x100b009e0
    TaskMessage* TaskMessage::operator=(TaskMessage&& taskMessage) {
        field_0 = taskMessage.field_0;
        field_8 = taskMessage.field_8;
        return this;
    }

    // 0x100b00a90
    TaskMessage* TaskMessage::operator=(const TaskMessage& taskMessage) {
        field_0 = taskMessage.field_0;
        field_8 = taskMessage.field_8;
        return this;
    }

} // namespace jag
