// libs/oldscape/jagex3/graphics/animation/OldscapeAnimCurve.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "OldscapeAnimCurve.h"

namespace jag::oldscape::graphics::animation {
    // 0x100320db0
    unsigned long OldscapeAnimCurve::LoadFromPacket(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        shared_ptr<OldscapeAnimKey>* psVar5;
        unsigned long arg1;
        uint32_t in_register_00000034;
        ReturnValue local_58;

        PacketReaderMixin<PacketT<Array<unsigned char>>>* packetReaderMixin =
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                (uint32_t)arg2);
        unsigned short uVar4 = packetReaderMixin->g2();
        PacketJ<Array<unsigned char> _> PVar1 = (PacketJ<Array<unsigned char> _>)packetReaderMixin->g1();
        packetJ = PVar1;
        PVar1 = (PacketJ<Array<unsigned char> _>)packetReaderMixin->g1();
        packetJ[3] = PVar1;
        PVar1 = (PacketJ<Array<unsigned char> _>)packetReaderMixin->g1();
        packetJ[4] = PVar1;
        bool cVar2 = packetReaderMixin->g1();
        packetJ[1] = (PacketJ<Array<unsigned char> _>)(cVar2);
        unsigned long arg1_00 = (unsigned long)uVar4;
        ((packetJ + 8))->set_max_size(arg1_00, 3);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if (uVar4 != 0) {
            arg1 = 0;
            do {
                make_shared<OldscapeAnimKey>(&local_58);
                OldscapeAnimKey::LoadFromPacket(*((PacketJ<Array<unsigned char> _>*)local_58.operator->()),
                                                (int)packetReaderMixin);
                psVar5 = (shared_ptr<OldscapeAnimKey>*)(*((packetJ + 8)))[arg1];
                *psVar5 = local_58;
                if (local_48 != nullptr) {
                    psVar5 = (shared_ptr<OldscapeAnimKey>*)local_48.operator->();
                    *psVar5 = local_58;
                }
                local_48 = local_58;
                arg1 = arg1 + 1;
            } while (arg1_00 != arg1);
        }
        return arg1_00;
    }

    // 0x100321270
    void OldscapeAnimCurve::ConvertKeysToFrames() {
        uint32_t* puVar5;
        uint32_t uVar6;

        uint8_t* this_00 = &field_8;
        shared_ptr<OldscapeAnimKey>* psVar3 = (shared_ptr<OldscapeAnimKey>*)(*this_00)[0];
        long lVar4 = (*psVar3).operator->();
        m_start = *(uint32_t*)(lVar4 + 16);
        int iVar1 = GetNumKeys();
        psVar3 = (shared_ptr<OldscapeAnimKey>*)(*this_00)[(long)(iVar1 - 1)];
        lVar4 = (*psVar3).operator->();
        m_end = *(uint32_t*)(lVar4 + 16);
        iVar1 = GetDuration();
        field_88.set_max_size((long)(iVar1 + 1), 3);
        iVar1 = GetStart();
        int iVar2 = GetEnd();
        if (iVar1 <= iVar2) {
            lVar4 = (long)iVar1;
            do {
                iVar2 = (int)lVar4;
                uVar6 = OldscapeAnimCurveSampler::SampleCurve(this, iVar2);
                iVar1 = GetStart();
                puVar5 = &field_88[lVar4 - iVar1];
                *puVar5 = uVar6;
                iVar1 = GetEnd();
                lVar4 = lVar4 + 1;
            } while (iVar2 < iVar1);
        }
        this_00->clear();
        iVar1 = GetStart();
        uVar6 = OldscapeAnimCurveSampler::SampleCurve(this, iVar1 - 1);
        field_120 = uVar6;
        iVar1 = GetEnd();
        uVar6 = OldscapeAnimCurveSampler::SampleCurve(this, iVar1 + 1);
        field_124 = uVar6;
    }

    // 0x100321390
    uint64_t OldscapeAnimCurve::GetNumKeys() const {
        bool cVar1 = field_8.empty();
        uint64_t uVar2 = 0;
        if (!cVar1) {
            uVar2 = field_8.end();
        }
        return uVar2;
    }

    // 0x1003213c0
    int OldscapeAnimCurve::GetDuration() {
        int iVar1 = GetEnd();
        int iVar2 = GetStart();
        return iVar1 - iVar2;
    }

    // 0x1003213f0
    uint32_t OldscapeAnimCurve::GetStart() const {
        return m_start;
    }

    // 0x100321400
    uint32_t OldscapeAnimCurve::GetEnd() const {
        return m_end;
    }

    // 0x100321470
    uint32_t OldscapeAnimCurve::GetValue(int arg1) {
        uint32_t* puVar3;

        int iVar1 = GetStart();
        if (arg1 < iVar1) {
            puVar3 = &field_120;
        } else {
            if (GetEnd() < arg1) {
                puVar3 = &field_124;
            } else {
                puVar3 = &field_88[(long)(arg1 - iVar1)];
            }
        }
        return *puVar3;
    }

    // 0x1003214d0
    int OldscapeAnimCurve::GetKeyIndexAtTime(float arg1) {
        uint8_t* puVar1;
        bool bVar2;
        shared_ptr<OldscapeAnimKey>* psVar5;
        long lVar6;
        shared_ptr<configdecoder::ObjType>* objType;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;

        if (-1 < (long)field_80) {
            puVar1 = &field_8;
            psVar5 = (shared_ptr<OldscapeAnimKey>*)(*puVar1)[(long)field_80];
            lVar6 = (*psVar5).operator->();
            if ((float)*(int*)(lVar6 + 16) <= arg1) {
                psVar5 = (shared_ptr<OldscapeAnimKey>*)(*puVar1)[(long)field_80];
                objType = (shared_ptr<configdecoder::ObjType>*)(*psVar5).operator->();
                bVar2 = *objType == nullptr;
                if (bVar2)
                    goto LAB_1003216e5;
                psVar5 = (shared_ptr<OldscapeAnimKey>*)(*puVar1)[(long)field_80];
                psVar5 = (shared_ptr<OldscapeAnimKey>*)(*psVar5).operator->();
                lVar6 = (*psVar5).operator->();
                if (arg1 < (float)*(int*)(lVar6 + 16))
                    goto LAB_1003216e5;
            }
        }
        int iVar3 = GetStart();
        if (arg1 < (float)iVar3) {
            return -1;
        }
        iVar3 = GetEnd();
        if ((float)iVar3 < arg1) {
            return -1;
        }
        int iVar4 = GetNumKeys();
        iVar3 = field_80;
        if (0 < iVar4) {
            iVar4 = iVar4 - 1;
            puVar1 = &field_8;
            iVar10 = 0;
            do {
                iVar9 = iVar4 + iVar10 >> 1;
                psVar5 = (shared_ptr<OldscapeAnimKey>*)(*puVar1)[(long)iVar9];
                lVar6 = (*psVar5).operator->();
                if ((float)*(int*)(lVar6 + 16) <= arg1) {
                    psVar5 = (shared_ptr<OldscapeAnimKey>*)(*puVar1)[(long)iVar9];
                    lVar6 = (*psVar5).operator->();
                    bVar2 = true;
                    if (arg1 <= (float)*(int*)(lVar6 + 16))
                        goto LAB_1003216d2;
                    iVar8 = iVar9 + 1;
                    psVar5 = (shared_ptr<OldscapeAnimKey>*)(*puVar1)[(long)iVar8];
                    lVar6 = (*psVar5).operator->();
                    iVar7 = iVar4;
                    if ((float)*(int*)(lVar6 + 16) <= arg1)
                        goto LAB_100321697;
                } else {
                    iVar9 = iVar9 - 1;
                    psVar5 = (shared_ptr<OldscapeAnimKey>*)(*puVar1)[(long)iVar9];
                    lVar6 = (*psVar5).operator->();
                    bVar2 = true;
                    iVar7 = iVar9;
                    iVar8 = iVar10;
                    if (arg1 <= (float)*(int*)(lVar6 + 16)) {
                    LAB_100321697:
                        bVar2 = false;
                        iVar9 = iVar3;
                        iVar4 = iVar7;
                        iVar10 = iVar8;
                    }
                }
                iVar3 = iVar9;
                iVar9 = iVar3;
                if ((bVar2) || (iVar4 < iVar10))
                    goto LAB_1003216d2;
            } while (true);
        }
        iVar9 = iVar3;
    LAB_1003216d2:
        if (iVar9 != field_80) {
            field_80 = iVar9;
            field_76 = 1;
        }
    LAB_1003216e5:
        return field_80;
    }

    // 0x100321700
    auto OldscapeAnimCurve::GetKeyAtTime(float arg1) {
        int iVar2;
        shared_ptr<dash3d::GroundDecor>* groundDecor;

        int iVar1 = GetKeyIndexAtTime(arg1);
        if (-1 < iVar1) {
            iVar2 = field_8.end();
            if (iVar1 < iVar2) {
                groundDecor = &field_8[(long)iVar1];
                return auto(groundDecor);
            }
        }
        new (&result) shared_ptr();
        return result;
    }

} // namespace jag::oldscape::graphics::animation

namespace jag {
    // 0x100321030
    shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeAnimKey>::type
    make_shared<oldscape::graphics::animation::OldscapeAnimKey>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        OldscapeAnimKey* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeAnimKey>::type result;
        } else {
            local_28[0] = placement_new<oldscape::graphics::animation::OldscapeAnimKey>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>, int,
                              oldscape::graphics::animation::OldscapeAnimKey*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
