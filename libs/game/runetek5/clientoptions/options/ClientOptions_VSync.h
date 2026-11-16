// libs/game/runetek5/clientoptions/options/ClientOptions_VSync.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game::option {
    class VSync {
    public:
        // virtual methods in vtable order
        virtual ~VSync();
        virtual uint64_t GetDefault();
        VSync(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[49];
    };

    // 0x100029ea0: VSync::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10060f910
    VSync::VSync(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<render::VSyncMode>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(-1, 3);
        new (this) Option<render::VSyncMode>(rt7Core, settings, str, local_30);
        uint8_t* this_00 = field_28;
        new (this_00) std::__cxx_atomic_base_impl(0);
        Singleton<render::RenderDevice>* this_02 = (Singleton<render::RenderDevice>*)this_00;
        this_00->SetZ(0);
        long lVar1 = ((MapArea*)this_02->Instance())->GetOrigin();
        if (*(char*)(lVar1 + 185) != '\0') {
            this_00->SetZ(3);
            if (*(char*)(lVar1 + 186) != '\0') {
                new (this_00) std::__cxx_atomic_base_impl(-1);
            }
        }
    }

    // 0x10060fb20: VSync::~VSync() has the same machine code as Option<render::VSyncMode>::~Option()

} // namespace jag::game::option
