// libs/game/runetek5/clientoptions/options/ClientOptions_VSync.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game::option {
    class VSync {
    public:
        // virtual methods in vtable order
        virtual ~VSync();
        virtual GetDefault();
        VSync(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined* field_0;     // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[49];
    };

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    VSync::GetDefault();

    // 0x100608a70, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VSync::VSync(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1006091a0, 16 bytes, complete-object destructor, inline, placed by class name
    // VSync::~VSync(): jumps straight to the base-object destructor

    // 0x10060f910, 208 bytes, base-object constructor, inline, placed by class name
    // VSync::VSync(graphics::RT7Core&, Settings&, char const*)
    void VSync::VSync(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1* this_00;
        MapArea* this_01;
        long lVar1;
        Singleton<render::RenderDevice>* this_02;
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(-1, 3);
        new (this) Option<render::VSyncMode>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee8528 + 16;
        this_00 = field_28;
        new (this_00) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>();
        this_02 = (Singleton<render::RenderDevice>*)this_00;
        this_00->SetZ(0);
        this_01 = (MapArea*)this_02->Instance();
        lVar1 = this_01->GetOrigin();
        if (*(char*)(lVar1 + 185) != '\0') {
            this_00->SetZ(3);
            if (*(char*)(lVar1 + 186) != '\0') {
                new (this_00)
                    std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4294967295);
            }
        }
    }

    // 0x10060fac0, 32 bytes, deleting destructor, inline, placed by class name
    // VSync::~VSync()
    void VSync::~VSync() {
        ~VSync(this);
        operator_delete(this);
    }

    // 0x10060fb20: the linker folded this into Option<render::VSyncMode>::~Option(), which has identical code
    VSync::~VSync();

} // namespace jag::game::option
