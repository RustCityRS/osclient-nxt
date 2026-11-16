// libs/oldscape/rs2lib/configdecoder/SeqType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class SeqType {
    public:
        AnimateModel90(dash3d::ModelLit&, int, int, int) const;
        SplitAnimateModel(dash3d::ModelLit&, int, SeqType&, int);
        AnimateModel(dash3d::ModelLit&, int, int) const;
        void Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*);
        SeqType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void PostDecode();
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        bool IsKeyFramed() const;
        SeqType* Get(int);
        SeqType* GetKeyFrameSet(int);
        GetKeyFrameSet() const;
        SplitAnimateModelNoKeyFrameSet(dash3d::ModelLit&, int, SeqType&, int);
        ulong Compare(Array<int, eastl::allocator>, Array<int, eastl::allocator>, int, int);
        AnimateModelWithExtra(dash3d::ModelLit&, int) const;
        uint GetEnd() const;
        uint GetStart() const;
        int GetDuration() const;
        GetKeyFrameSetStatus() const;
        GetKeyFrameSetStatus(int);
        SeqType* GetKeyFrameSetInner(int);
        void ResetCache();
        bool IsInitComplete();
        void GetNumFrames();
        SeqType();
        ~SeqType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 8 bytes */ m_pAnims;
        static /* 8 bytes */ m_pBases;
        static /* 5376 bytes */ m_recentUse;
        static /* 8256 bytes */ m_framesetCache;
        static /* 8256 bytes */ m_keyFrameSetCache;

        // data members, from how the methods use this: 264 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        long field_8; // offset 8
        char _unknown_16[48];
        uint m_start; // offset 64
        uint m_end;   // offset 68
        char _unknown_72[96];
        uint field_168; // offset 168
        char _unknown_172[52];
        undefined1 field_224; // offset 224
        char _unknown_225[3];
        uint field_228;       // offset 228
        uint field_232;       // offset 232
        uint field_236;       // offset 236
        uint field_240;       // offset 240
        undefined1 field_244; // offset 244
        char _unknown_245[3];
        uint field_248; // offset 248
        uint field_252; // offset 252
        uint field_256; // offset 256
        char _unknown_260[4];
    };

    // 0x100235310, 144 bytes, inline, placed by class name and debug map
    // SeqType::GetKeyFrameSet(int)
    SeqType* SeqType::GetKeyFrameSet(int param_1) {
        OldscapeAnimKeyFrameSet* this_00;
        shared_ptr local_28;

        GetKeyFrameSetInner((SeqType*)&local_28, param_1);
        if (operator!=(&local_28, (_func_decltype_nullptr*)0)) {
            this_00 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)&local_28);
            if ((undefined*)this_00->GetStatus() == DataStatus::READY) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_28);
                goto LAB_10023535f;
            }
        }
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
    LAB_10023535f:
        local_28.~shared_ptr();
        return this;
    }

    // 0x10024d170, 16 bytes, complete-object constructor, inline, placed by class name
    // SeqType::SeqType(): jumps straight to the base-object constructor

    // 0x10024d180, 320 bytes, base-object constructor, inline, placed by class name
    // SeqType::SeqType()
    void SeqType::SeqType() {
        allocator local_48[8];
        long* local_40;
        undefined1* local_38;

        field_0 = -1;
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        local_40 = &field_8;
        new (&field_8, local_48)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        m_start = 0;
        m_end = 0;
        new (&field_72) Array<int, eastl::allocator>();
        local_38 = &field_72;
        new (&field_96) Array<int, eastl::allocator>();
        new (&field_120) Array<int, eastl::allocator>();
        new (&field_144) Array<int, eastl::allocator>();
        field_168 = 4294967295;
        new (&field_176) Array<int, eastl::allocator>();
        new (&field_200) Array<bool, eastl::allocator>();
        field_224 = 0;
        field_228 = 5;
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 99;
        field_244 = 0;
        field_248 = 4294967295;
        field_252 = 4294967295;
        field_256 = 2;
    }

    // 0x10024d360, 16 bytes, complete-object destructor, inline, placed by class name
    // SeqType::~SeqType(): jumps straight to the base-object destructor

    // 0x10024d370, 96 bytes, base-object destructor, inline, placed by class name
    // SeqType::~SeqType()
    void SeqType::~SeqType() {
        (&field_200)->~Array();
        (&field_176)->~Array();
        (&field_144)->~Array();
        (&field_120)->~Array();
        (&field_96)->~Array();
        (&field_72)->~Array();
        (&field_8)->~hash_map();
    }

} // namespace jag::oldscape::configdecoder
