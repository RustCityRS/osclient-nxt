// libs/oldscape/jagex3/graphics/animation/OldscapeAnimCurve.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "OldscapeAnimCurve.h"

namespace jag::oldscape::graphics::animation {
    // 0x100320db0, 320 bytes, placed by class name and debug map
    // OldscapeAnimCurve::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    ulong OldscapeAnimCurve::LoadFromPacket(PacketJ* param_1, int param_2) {
        PacketJ PVar1;
        char cVar2;
        ushort uVar4;
        PacketJ* pPVar5;
        shared_ptr<OldscapeAnimKey>* psVar6;
        ulong uVar7;
        undefined4 in_register_00000034;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this;
        ulong uVar8;
        shared_ptr local_58;
        shared_ptr local_48;

        this = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000034,
                                                                                             param_2);
        uVar4 = g2();
        PVar1 = (PacketJ)g1();
        *param_1 = PVar1;
        PVar1 = (PacketJ)g1();
        param_1[3] = PVar1;
        PVar1 = (PacketJ)g1();
        param_1[4] = PVar1;
        cVar2 = g1();
        param_1[1] = (PacketJ)(cVar2 != '\0');
        uVar8 = (ulong)uVar4;
        ((param_1 + 8))->set_max_size(uVar8, 3);
        new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        if (uVar4 != 0) {
            uVar7 = 0;
            do {
                make_shared<OldscapeAnimKey>((jag*)&local_58);
                pPVar5 = (PacketJ*)shared_ptr<OldscapeAnimKey>::operator->((shared_ptr<OldscapeAnimKey>*)&local_58);
                OldscapeAnimKey::LoadFromPacket(pPVar5, (int)this);
                psVar6 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                    (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)(param_1 + 8), uVar7);
                shared_ptr<OldscapeAnimKey>::operator=(psVar6, &local_58);
                if (operator!=(&local_48, (_func_decltype_nullptr*)0)) {
                    psVar6 = (shared_ptr<OldscapeAnimKey>*)shared_ptr<OldscapeAnimKey>::operator->(
                        (shared_ptr<OldscapeAnimKey>*)&local_48);
                    shared_ptr<OldscapeAnimKey>::operator=(psVar6, &local_58);
                }
                shared_ptr<OldscapeAnimKey>::operator=((shared_ptr<OldscapeAnimKey>*)&local_48, &local_58);
                local_58.~shared_ptr();
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
        }
        local_48.~shared_ptr();
        return uVar8;
    }

    // 0x100321270, 288 bytes, placed by class name
    // OldscapeAnimCurve::ConvertKeysToFrames()
    void OldscapeAnimCurve::ConvertKeysToFrames() {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        shared_ptr<OldscapeAnimKey>* psVar3;
        long lVar4;
        undefined4* puVar5;
        undefined4 uVar6;

        this_00 = &field_8;
        psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this_00, 0);
        lVar4 = shared_ptr<OldscapeAnimKey>::operator->(psVar3);
        m_start = *(undefined4*)(lVar4 + 16);
        iVar1 = GetNumKeys(this);
        psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this_00, (long)(iVar1 + -1));
        lVar4 = shared_ptr<OldscapeAnimKey>::operator->(psVar3);
        m_end = *(undefined4*)(lVar4 + 16);
        iVar1 = GetDuration(this);
        (&field_88, (long)(iVar1 + 1), 3)->set_max_size();
        iVar1 = GetStart(this);
        iVar2 = GetEnd(this);
        if (iVar1 <= iVar2) {
            lVar4 = (long)iVar1;
            do {
                iVar2 = (int)lVar4;
                uVar6 = OldscapeAnimCurveSampler::SampleCurve(this, iVar2);
                iVar1 = GetStart(this);
                puVar5 = (undefined4*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&field_88, lVar4 - iVar1);
                *puVar5 = uVar6;
                iVar1 = GetEnd(this);
                lVar4 = lVar4 + 1;
            } while (iVar2 < iVar1);
        }
        this_00->clear();
        iVar1 = GetStart(this);
        uVar6 = OldscapeAnimCurveSampler::SampleCurve(this, iVar1 + -1);
        field_120 = uVar6;
        iVar1 = GetEnd(this);
        uVar6 = OldscapeAnimCurveSampler::SampleCurve(this, iVar1 + 1);
        field_124 = uVar6;
    }

    // 0x100321390, 48 bytes, placed by class name
    // OldscapeAnimCurve::GetNumKeys() const
    undefined8 OldscapeAnimCurve::GetNumKeys() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_8)->empty();
        uVar2 = 0;
        if (cVar1 == '\0') {
            uVar2 = (&field_8)->end();
        }
        return uVar2;
    }

    // 0x1003213c0, 48 bytes, placed by class name
    // OldscapeAnimCurve::GetDuration()
    int OldscapeAnimCurve::GetDuration() {
        int iVar1;
        int iVar2;

        iVar1 = GetEnd(this);
        iVar2 = GetStart(this);
        return iVar1 - iVar2;
    }

    // 0x1003213f0, 16 bytes, placed by class name
    // OldscapeAnimCurve::GetStart() const
    undefined4 OldscapeAnimCurve::GetStart() {
        return m_start;
    }

    // 0x100321400, 16 bytes, placed by class name
    // OldscapeAnimCurve::GetEnd() const
    undefined4 OldscapeAnimCurve::GetEnd() {
        return m_end;
    }

    // 0x100321470, 96 bytes, placed by class name
    // OldscapeAnimCurve::GetValue(int)
    undefined4 OldscapeAnimCurve::GetValue(int param_1) {
        int iVar1;
        undefined4* puVar3;

        iVar1 = GetStart(this);
        if (param_1 < iVar1) {
            puVar3 = &field_120;
        } else {
            if (GetEnd(this) < param_1) {
                puVar3 = &field_124;
            } else {
                puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&field_88, (long)(param_1 - iVar1));
            }
        }
        return *puVar3;
    }

    // 0x1003214d0, 560 bytes, placed by class name
    // OldscapeAnimCurve::GetKeyIndexAtTime(float)
    int OldscapeAnimCurve::GetKeyIndexAtTime(float param_1) {
        undefined1* puVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        shared_ptr<OldscapeAnimKey>* psVar5;
        long lVar6;
        shared_ptr* psVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;

        if (-1 < (long)field_80) {
            puVar1 = &field_8;
            psVar5 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)puVar1, (long)field_80);
            lVar6 = shared_ptr<OldscapeAnimKey>::operator->(psVar5);
            if ((float)*(int*)(lVar6 + 16) <= param_1) {
                psVar5 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                    (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)puVar1, (long)field_80);
                psVar7 = (shared_ptr*)shared_ptr<OldscapeAnimKey>::operator->(psVar5);
                bVar2 = operator==(psVar7, (_func_decltype_nullptr*)0);
                if (bVar2)
                    goto LAB_1003216e5;
                psVar5 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                    (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)puVar1, (long)field_80);
                psVar5 = (shared_ptr<OldscapeAnimKey>*)shared_ptr<OldscapeAnimKey>::operator->(psVar5);
                lVar6 = shared_ptr<OldscapeAnimKey>::operator->(psVar5);
                if (param_1 < (float)*(int*)(lVar6 + 16))
                    goto LAB_1003216e5;
            }
        }
        iVar3 = GetStart(this);
        if (param_1 < (float)iVar3) {
            return -1;
        }
        iVar3 = GetEnd(this);
        if ((float)iVar3 < param_1) {
            return -1;
        }
        iVar4 = GetNumKeys(this);
        iVar3 = field_80;
        if (0 < iVar4) {
            iVar4 = iVar4 + -1;
            puVar1 = &field_8;
            iVar11 = 0;
            do {
                iVar10 = iVar4 + iVar11 >> 1;
                psVar5 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                    (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)puVar1, (long)iVar10);
                lVar6 = shared_ptr<OldscapeAnimKey>::operator->(psVar5);
                if ((float)*(int*)(lVar6 + 16) <= param_1) {
                    psVar5 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)puVar1, (long)iVar10);
                    lVar6 = shared_ptr<OldscapeAnimKey>::operator->(psVar5);
                    bVar2 = true;
                    if (param_1 <= (float)*(int*)(lVar6 + 16))
                        goto LAB_1003216d2;
                    iVar9 = iVar10 + 1;
                    psVar5 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)puVar1, (long)iVar9);
                    lVar6 = shared_ptr<OldscapeAnimKey>::operator->(psVar5);
                    iVar8 = iVar4;
                    if ((float)*(int*)(lVar6 + 16) <= param_1)
                        goto LAB_100321697;
                } else {
                    iVar10 = iVar10 + -1;
                    psVar5 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)puVar1, (long)iVar10);
                    lVar6 = shared_ptr<OldscapeAnimKey>::operator->(psVar5);
                    bVar2 = true;
                    iVar8 = iVar10;
                    iVar9 = iVar11;
                    if (param_1 <= (float)*(int*)(lVar6 + 16)) {
                    LAB_100321697:
                        bVar2 = false;
                        iVar10 = iVar3;
                        iVar4 = iVar8;
                        iVar11 = iVar9;
                    }
                }
                iVar3 = iVar10;
                iVar10 = iVar3;
                if ((bVar2) || (iVar4 < iVar11))
                    goto LAB_1003216d2;
            } while (true);
        }
        iVar10 = iVar3;
    LAB_1003216d2:
        if (iVar10 != field_80) {
            field_80 = iVar10;
            field_76 = 1;
        }
    LAB_1003216e5:
        return field_80;
    }

    // 0x100321700, 96 bytes, placed by class name
    // OldscapeAnimCurve::GetKeyAtTime(float)
    OldscapeAnimCurve* OldscapeAnimCurve::GetKeyAtTime(float param_1) {
        int iVar1;
        int iVar2;
        shared_ptr* psVar3;
        OldscapeAnimCurve* in_RSI;

        iVar1 = GetKeyIndexAtTime(in_RSI, param_1);
        if (-1 < iVar1) {
            iVar2 = (&in_RSI->field_8)->end();
            if (iVar1 < iVar2) {
                psVar3 = (shared_ptr*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                    (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)&in_RSI->field_8, (long)iVar1);
                new (this) shared_ptr<dash3d::Decor>(psVar3);
                return this;
            }
        }
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

} // namespace jag::oldscape::graphics::animation

namespace jag {
    // 0x100321030, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeAnimKey>::type make_shared<oldscape::graphics::animation::OldscapeAnimKey>()
    jag* make_shared<oldscape::graphics::animation::OldscapeAnimKey>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        OldscapeAnimKey* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::graphics::animation::OldscapeAnimKey>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>, int,
                                   oldscape::graphics::animation::OldscapeAnimKey*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
