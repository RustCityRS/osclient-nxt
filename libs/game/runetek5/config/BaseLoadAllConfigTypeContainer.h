// libs/game/runetek5/config/BaseLoadAllConfigTypeContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game {
    class BaseLoadAllConfigTypeContainer {
    public:
        // virtual methods in vtable order
        virtual ~BaseLoadAllConfigTypeContainer();
        GetGroupDownloadProgress() const;
        GetConfigDecodeProgress() const;
        BaseLoadAllConfigTypeContainer(unsigned int);

        // data members, from how the methods use this: 32 bytes
        undefined* field_0;                 // offset 0, vtable pointer
        undefined4 field_8;                 // offset 8
        uint field_12;                      // offset 12
        undefined8 m_groupDownloadProgress; // offset 16
        undefined4 field_24;                // offset 24
        char _unknown_28[4];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseLoadAllConfigTypeContainer::~BaseLoadAllConfigTypeContainer();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    BaseLoadAllConfigTypeContainer::~BaseLoadAllConfigTypeContainer();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    BaseLoadAllConfigTypeContainer::~BaseLoadAllConfigTypeContainer();

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    BaseLoadAllConfigTypeContainer::GetGroupDownloadProgress() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    BaseLoadAllConfigTypeContainer::GetConfigDecodeProgress() const;

    // 0x1004d9fb0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // BaseLoadAllConfigTypeContainer::BaseLoadAllConfigTypeContainer(unsigned int)
    void BaseLoadAllConfigTypeContainer::BaseLoadAllConfigTypeContainer(uint param_1) {
        field_0 = PTR_vtable_100ee83e8 + 16;
        field_8 = 0;
        field_12 = param_1;
        m_groupDownloadProgress = 0;
        field_24 = 0;
    }

} // namespace jag::game
