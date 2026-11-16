// projects/osclient/MapSpotAnim.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class MapSpotAnim : public ClientObj // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~MapSpotAnim();
        virtual MapSpotAnim* GetTempModel(int);
        virtual IsClientLocAnim() const;
        IsLit() const;
        IsUnlit() const;
        MapSpotAnim(int, int, int, int, int, int, int);
        void DoAnim(int);

        // data members, from how the methods use this: 84 bytes, the first 57 are ClientObj
        char _unknown_57[15];
        int field_72; // offset 72
        int field_76; // offset 76
        char _unknown_80[4];
    };

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    MapSpotAnim::IsClientLocAnim() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    MapSpotAnim::IsLit() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    MapSpotAnim::IsUnlit() const;

    // 0x100187280, 272 bytes, base-object constructor, placed by class name
    // MapSpotAnim::MapSpotAnim(int, int, int, int, int, int, int)
    void MapSpotAnim::MapSpotAnim(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  int param_7) {
        int iVar1;
        long lVar2;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var3;
        shared_ptr local_40;

        p_Var3 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        new (this) dash3d::UniqueModelSource();
        field_0 = &PTR__MapSpotAnim_100ef5a30;
        field_24 = 0;
        new (&field_56, p_Var3) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_72 = 0;
        field_76 = 0;
        field_48 = param_1;
        field_32 = param_2;
        field_36 = param_3;
        field_40 = param_4;
        field_44 = param_5;
        field_28 = param_6 + param_7;
        local_40.List(param_1);
        lVar2 = shared_ptr<configdecoder::SpotType>::operator->((shared_ptr<configdecoder::SpotType>*)&local_40);
        iVar1 = *(int*)(lVar2 + 8);
        local_40.~shared_ptr();
        if (iVar1 == -1) {
            field_24 = 1;
        } else {
            field_24 = 0;
            local_40.List(iVar1);
            shared_ptr<configdecoder::SeqType>::operator=((shared_ptr<configdecoder::SeqType>*)&field_56, &local_40);
            local_40.~shared_ptr();
        }
    }

    // 0x100187410, 32 bytes, complete-object constructor, placed by class name
    // MapSpotAnim::MapSpotAnim(int, int, int, int, int, int, int)
    void MapSpotAnim::MapSpotAnim(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  int param_7) {
        MapSpotAnim(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x100187430, 208 bytes, placed by class name
    // MapSpotAnim::DoAnim(int)
    void MapSpotAnim::DoAnim(int param_1) {
        undefined1* this_00;
        int iVar2;
        SeqType* pSVar3;
        long lVar4;
        int* piVar5;
        int iVar6;

        if (field_24 == '\0') {
            field_76 = field_76 + param_1;
            this_00 = &field_56;
            pSVar3 =
                (SeqType*)shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
            if (pSVar3->IsKeyFramed() == '\0') {
                do {
                    iVar2 = field_76;
                    lVar4 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar4 + 120), (long)field_72);
                    if (iVar2 <= *piVar5) {
                        return;
                    }
                    lVar4 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar4 + 120), (long)field_72);
                    field_76 = field_76 - *piVar5;
                    iVar6 = field_72 + 1;
                    field_72 = iVar6;
                    lVar4 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    iVar2 = ((lVar4 + 72))->end();
                } while (iVar6 < iVar2);
            } else {
                iVar6 = param_1 + field_72;
                field_72 = iVar6;
                pSVar3 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                    (shared_ptr<configdecoder::SeqType>*)this_00);
                iVar2 = pSVar3->GetDuration();
                if (iVar6 < iVar2) {
                    return;
                }
            }
            field_24 = 1;
        }
    }

    // 0x100187540, 112 bytes, placed by class name
    // MapSpotAnim::GetTempModel(int)
    MapSpotAnim* MapSpotAnim::GetTempModel(int param_1) {
        int iVar1;
        undefined4 in_register_00000034;
        shared_ptr<RSevenDebugPresetProvider> local_30[16];

        local_30->List(*(int*)(CONCAT44(in_register_00000034, param_1) + 48));
        iVar1 = shared_ptr<configdecoder::SpotType>::operator->((shared_ptr<configdecoder::SpotType>*)local_30);
        GetTempModel2(iVar1);
        local_30->~shared_ptr();
        return this;
    }

    // 0x100195e50, 16 bytes, complete-object destructor, inline, placed by class name
    // MapSpotAnim::~MapSpotAnim(): jumps straight to the base-object destructor

    // 0x100195e60, 32 bytes, deleting destructor, inline, placed by class name
    // MapSpotAnim::~MapSpotAnim()
    void MapSpotAnim::~MapSpotAnim() {
        ~MapSpotAnim(this);
        operator_delete(this);
    }

    // 0x1001a3b10, 48 bytes, base-object destructor, inline, placed by class name
    // MapSpotAnim::~MapSpotAnim()
    void MapSpotAnim::~MapSpotAnim() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        (&field_56)->~shared_ptr();
        eastl::destruct<highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::oldscape
