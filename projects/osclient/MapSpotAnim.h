// projects/osclient/MapSpotAnim.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class MapSpotAnim : public ClientObj // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~MapSpotAnim();
        virtual MapSpotAnim* GetTempModel(int arg1);
        virtual bool IsClientLocAnim() const;
        bool IsLit() const;
        bool IsUnlit() const;
        MapSpotAnim(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        void DoAnim(int arg1);

    private:
        uint8_t _unknown_57[15];
        int field_72;
        int field_76;
        uint8_t _unknown_80[4];
    };

    // 0x100029ea0: MapSpotAnim::IsClientLocAnim() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: MapSpotAnim::IsLit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: MapSpotAnim::IsUnlit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100187280
    MapSpotAnim::MapSpotAnim(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7)
        : dash3d::UniqueModelSource(), field_24(0) {
        new (&field_56) shared_ptr();
        field_72 = 0;
        field_76 = 0;
        field_48 = arg1;
        field_32 = arg2;
        field_36 = arg3;
        field_40 = arg4;
        field_44 = arg5;
        field_28 = arg6 + arg7;
        auto local_40 = configdecoder::SpotType::List(arg1);
        long lVar1 = local_40.operator->();
        int arg1_00 = *(int*)(lVar1 + 8);
        if (arg1_00 == -1) {
            field_24 = 1;
        } else {
            field_24 = 0;
            local_40 = configdecoder::SeqType::List(arg1_00);
            field_56 = local_40;
        }
    }

    // 0x100187430
    void MapSpotAnim::DoAnim(int arg1) {
        uint8_t* this_00;
        int iVar2;
        SeqType* pSVar3;
        long lVar4;
        int* piVar5;
        int iVar6;

        if (field_24 == '\0') {
            field_76 = field_76 + arg1;
            this_00 = &field_56;
            pSVar3 = (SeqType*)(*this_00).operator->();
            if (pSVar3->IsKeyFramed() == '\0') {
                do {
                    iVar2 = field_76;
                    lVar4 = (*this_00).operator->();
                    piVar5 = (int*)(*((lVar4 + 120)))[(long)field_72];
                    if (iVar2 <= *piVar5) {
                        return;
                    }
                    lVar4 = (*this_00).operator->();
                    piVar5 = (int*)(*((lVar4 + 120)))[(long)field_72];
                    field_76 = field_76 - *piVar5;
                    iVar6 = field_72 + 1;
                    field_72 = iVar6;
                    lVar4 = (*this_00).operator->();
                    iVar2 = ((lVar4 + 72))->end();
                } while (iVar6 < iVar2);
            } else {
                iVar6 = arg1 + field_72;
                field_72 = iVar6;
                pSVar3 = (SeqType*)(*this_00).operator->();
                iVar2 = pSVar3->GetDuration();
                if (iVar6 < iVar2) {
                    return;
                }
            }
            field_24 = 1;
        }
    }

    // 0x100187540
    MapSpotAnim* MapSpotAnim::GetTempModel(int arg1) {
        uint32_t in_register_00000034;

        long lVar1 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        auto local_30 = configdecoder::SpotType::List(*(int*)(lVar1 + 48));
        auto this_00 = local_30.operator->();
        int arg1_00 = -1;
        if (*(char*)(lVar1 + 24) == '\0') {
            arg1_00 = *(int*)(lVar1 + 72);
        }
        *this = this_00->GetTempModel2(arg1_00);
        return this;
    }

    // 0x1001a3b10
    MapSpotAnim::~MapSpotAnim() {
        field_56.~shared_ptr();
        destruct<highlight::NpcUID*>();
    }

} // namespace jag::oldscape
