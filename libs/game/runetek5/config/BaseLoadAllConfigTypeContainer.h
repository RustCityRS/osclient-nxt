// libs/game/runetek5/config/BaseLoadAllConfigTypeContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game {
    class BaseLoadAllConfigTypeContainer {
    public:
        // virtual methods in vtable order
        virtual ~BaseLoadAllConfigTypeContainer();
        int GetGroupDownloadProgress() const;
        unsigned int GetConfigDecodeProgress() const;
        BaseLoadAllConfigTypeContainer(unsigned int arg1);

    private:
        uint32_t field_8;
        unsigned int field_12;
        uint64_t m_groupDownloadProgress;
        uint32_t field_24;
        uint8_t _unknown_28[4];
    };

    // 0x100009e70: BaseLoadAllConfigTypeContainer::~BaseLoadAllConfigTypeContainer() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100066b70: BaseLoadAllConfigTypeContainer::GetGroupDownloadProgress() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1001117e0: BaseLoadAllConfigTypeContainer::GetConfigDecodeProgress() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x1004d9fb0
    BaseLoadAllConfigTypeContainer::BaseLoadAllConfigTypeContainer(unsigned int arg1)
        : field_8(0), field_12(arg1), m_groupDownloadProgress(0), field_24(0) {}

} // namespace jag::game
