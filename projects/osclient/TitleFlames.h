// projects/osclient/TitleFlames.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class TitleFlames {
    public:
        void Close();
        void RenderFlames(int arg1, int arg2, graphics::Pix2D& pix2D);
        void UpdateFlames(int arg1);
        void DrawFlames(int arg1, graphics::Pix2D& pix2D);
        void SetupFire();
        void GenerateFlameCoolingMap(graphics::Pix8* pix8);
        unsigned int Merge(int arg1, int arg2, int arg3);
        void DoBlend(int arg1, std::array<int, 256ul>& arg2);
        void DrawSingleFlame(graphics::Pix2D& pix2D, int arg2);
        TitleFlames(Array<graphics::Pix8>&& pix8s);
        ~TitleFlames();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        long field_16;
        uint8_t _unknown_24[1024];
        int field_1048;
        uint8_t _unknown_1052[4096];
        int field_5148;
        int field_5152;
        uint8_t _unknown_5156[524288];
        unsigned int field_529444;
        int field_529448;
        int field_529452;
        uint8_t _unknown_529456[4];
    };

    // 0x1001316e0
    TitleFlames::TitleFlames(Array<graphics::Pix8>&& pix8s)
        : Array<graphics::Pix8>(), field_1048(0), field_5148(0), field_5152(0), field_529444(0), field_529448(0),
          field_529452(0) {
        *this = pix8s;
        SetupFire();
    }

    // 0x1001565e0
    TitleFlames::~TitleFlames() {}

} // namespace jag::oldscape

namespace jag {
    // 0x10011f860
    shared_ptr_if_not_array<oldscape::midi2::MidiRequest>::type
    make_shared<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, char const (&)[11], char const (&)[1], int&,
                bool>(oldscape::jagex3::Js5*&& arg1, char const (&arg2)[11], char const (&arg3)[1], int& arg4,
                      bool&& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        MidiRequest* local_40[2];

        auto arg1_00 = aligned_alloc(112, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::MidiRequest>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, char const(&)[11], char const(&)[1],
                              int&, bool>((void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::MidiRequest>, int, oldscape::midi2::MidiRequest*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::oldscape::graphics {
    // 0x1001565e0: pix8multi::~pix8multi() has the same machine code as TitleFlames::~TitleFlames()

} // namespace jag::oldscape::graphics
