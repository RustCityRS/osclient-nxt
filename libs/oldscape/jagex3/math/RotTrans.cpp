// libs/oldscape/jagex3/math/RotTrans.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "RotTrans.h"
#include "libs/oldscape/jagex3/dash3d/Operation.h"

namespace jag::oldscape::math {
    // 0x1002c7920, 128 bytes, base-object constructor, placed by class name and debug map
    // RotTrans::RotTrans(PacketJ<Array<unsigned char, eastl::allocator> >&, bool)
    void RotTrans::RotTrans(PacketJ* param_1, bool param_2) {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (&field_16, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        Deserialise(this, param_1, param_2);
    }

    // 0x1002c79a0, 208 bytes, placed by class name and debug map
    // RotTrans::Deserialise(PacketJ<Array<unsigned char, eastl::allocator> >&, bool)
    void RotTrans::Deserialise(PacketJ* param_1, bool param_2) {
        undefined3 in_register_00000011;
        shared_ptr local_30;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            make_shared<jag::math::QuaternionT<float>, PacketJ<Array<unsigned char, eastl::allocator>>&>(
                (jag*)&local_30, param_1);
            shared_ptr<jag::math::QuaternionT<float>>::operator=((shared_ptr<jag::math::QuaternionT<float>>*)this,
                                                                 &local_30);
            local_30.~shared_ptr();
            make_shared<jag::math::Vector3T<float>, PacketJ<Array<unsigned char, eastl::allocator>>&>((jag*)&local_30,
                                                                                                      param_1);
            shared_ptr<jag::math::Vector3T<float>>::operator=((shared_ptr<jag::math::Vector3T<float>>*)&field_32,
                                                              &local_30);
            local_30.~shared_ptr();
            make_shared<jag::math::Vector3T<float>, PacketJ<Array<unsigned char, eastl::allocator>>&>((jag*)&local_30,
                                                                                                      param_1);
            shared_ptr<jag::math::Vector3T<float>>::operator=((shared_ptr<jag::math::Vector3T<float>>*)&field_16,
                                                              &local_30);
            local_30.~shared_ptr();
        } else {
            DeserialiseLightweight(this, param_1);
        }
    }

    // 0x1002c7a70, 16 bytes, complete-object constructor, placed by class name and debug map
    // RotTrans::RotTrans(PacketJ<Array<unsigned char, eastl::allocator> >&, bool): jumps straight to the base-object constructor

    // 0x1002c7a80, 272 bytes, base-object constructor, placed by class name and debug map
    // RotTrans::RotTrans()
    void RotTrans::RotTrans() {
        _func_decltype_nullptr* in_RSI;
        float local_44;
        float local_40;
        float local_3c;
        shared_ptr local_38;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        make_shared<jag::math::QuaternionT<float>>((jag*)&local_38);
        shared_ptr<jag::math::QuaternionT<float>>::operator=((shared_ptr<jag::math::QuaternionT<float>>*)this,
                                                             &local_38);
        local_38.~shared_ptr();
        make_shared<jag::math::Vector3T<float>>((jag*)&local_38);
        shared_ptr<jag::math::Vector3T<float>>::operator=((shared_ptr<jag::math::Vector3T<float>>*)&field_32,
                                                          &local_38);
        local_38.~shared_ptr();
        local_44 = 1.0;
        local_40 = 1.0;
        local_3c = 1.0;
        make_shared<jag::math::Vector3T<float>, float&, float&, float&>((jag*)&local_38, &local_44, &local_40,
                                                                        &local_3c);
        shared_ptr<jag::math::Vector3T<float>>::operator=((shared_ptr<jag::math::Vector3T<float>>*)&field_16,
                                                          &local_38);
        local_38.~shared_ptr();
    }

    // 0x1002c7de0, 16 bytes, complete-object constructor, placed by class name and debug map
    // RotTrans::RotTrans(): jumps straight to the base-object constructor

    // 0x1002c7df0, 144 bytes, base-object constructor, placed by class name and debug map
    // RotTrans::RotTrans(RotTrans const&)
    void RotTrans::RotTrans(RotTrans* param_1) {
        RotTrans local_58;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (&field_16, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        RotTrans(&local_58);
        local_58.~ResolvedModel();
        Set(this, param_1);
    }

    // 0x1002c7e90, 128 bytes, placed by class name
    // RotTrans::Set(RotTrans const&)
    void RotTrans::Set(RotTrans* param_1) {
        Vector4T<float>* this_00;
        Vector4T* pVVar1;
        Vector3T<float>* pVVar2;
        Vector3T* pVVar3;

        this_00 = (Vector4T<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator->(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        pVVar1 = (Vector4T*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)param_1);
        this_00->Set(pVVar1);
        pVVar2 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        pVVar3 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_32);
        pVVar2->Set(pVVar3);
        pVVar2 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
        pVVar3 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_16);
        pVVar2->Set(pVVar3);
    }

    // 0x1002c7f10, 16 bytes, complete-object constructor, placed by class name
    // RotTrans::RotTrans(RotTrans const&): jumps straight to the base-object constructor

    // 0x1002c7f20, 112 bytes, placed by class name
    // RotTrans::GetLightweightPacketSize()
    int RotTrans::GetLightweightPacketSize() {
        uint uVar1;
        QuaternionT<float>* this_00;
        int iVar2;
        int iVar3;
        int iVar4;

        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator->(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        this_00->Normalise();
        uVar1 = GetLightweightMask(this);
        iVar2 = ((uVar1 & 8) >> 2) + ((uVar1 & 4) >> 1) + (uVar1 & 2) + (uVar1 & 1) * 8;
        if ((uVar1 & 16) == 0) {
            iVar3 = iVar2 + 3;
            if ((uVar1 & 32) == 0) {
                iVar3 = iVar2 + 1;
            }
            iVar4 = iVar3 + 2;
            if ((uVar1 & 64) == 0) {
                iVar4 = iVar3;
            }
            iVar2 = iVar4 + 2;
            if (-1 < (char)uVar1) {
                iVar2 = iVar4;
            }
        } else {
            iVar2 = iVar2 + 3;
        }
        return iVar2;
    }

    // 0x1002c7ff0, 304 bytes, placed by class name
    // RotTrans::GetLightweightMask()
    uint RotTrans::GetLightweightMask() {
        byte bVar1;
        bool bVar2;
        char cVar3;
        QuaternionT<float>* this_00;
        Layout* pLVar4;
        vector* pvVar5;
        Vector2T<int>* pVVar6;
        float* pfVar7;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar8;
        Vector3T* pVVar9;
        Vector3T<float>* this_01;
        uint uVar10;
        type* ptVar11;
        uint uVar12;
        undefined1* puVar13;

        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        ptVar11 = (type*)PTR_IDENTITY_100ee6678;
        bVar1 = jag::math::QuaternionT<float>::operator!=(this_00, (QuaternionT*)PTR_IDENTITY_100ee6678);
        puVar13 = &field_32;
        pLVar4 = (Layout*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)puVar13);
        pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar4, ptVar11);
        uVar10 = bVar1 + 2;
        if (*(float*)pvVar5 == 0.0) {
            uVar10 = (uint)bVar1;
        }
        pVVar6 = (Vector2T<int>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)puVar13);
        pfVar7 = (float*)pVVar6->y();
        uVar12 = uVar10 + 4;
        if (*pfVar7 == 0.0) {
            uVar12 = uVar10;
        }
        pcVar8 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                 eastl::allocator, 0>*)
                shared_ptr<jag::math::Vector3T<float>>::operator->((shared_ptr<jag::math::Vector3T<float>>*)puVar13);
        pfVar7 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar8);
        uVar10 = uVar12 + 8;
        if (*pfVar7 == 0.0) {
            uVar10 = uVar12;
        }
        puVar13 = &field_16;
        pVVar9 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)puVar13);
        ptVar11 = (type*)PTR_ONE_100ee66d8;
        bVar2 = jag::math::operator!=(pVVar9, (Vector3T*)PTR_ONE_100ee66d8);
        if (bVar2) {
            this_01 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                (shared_ptr<jag::math::Vector3T<float>>*)puVar13);
            cVar3 = this_01->IsUniform();
            if (cVar3 == '\0') {
                pLVar4 = (Layout*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                    (shared_ptr<jag::math::Vector3T<float>>*)puVar13);
                pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar4, ptVar11);
                uVar12 = uVar10;
                if (*(float*)pvVar5 != 0.0) {
                    uVar12 = uVar10 + 32;
                }
                pVVar6 = (Vector2T<int>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                    (shared_ptr<jag::math::Vector3T<float>>*)puVar13);
                pfVar7 = (float*)pVVar6->y();
                uVar10 = uVar12 + 64;
                if (*pfVar7 == 0.0) {
                    uVar10 = uVar12;
                }
                pcVar8 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                              eastl::allocator, 0>*)
                             shared_ptr<jag::math::Vector3T<float>>::operator->(
                                 (shared_ptr<jag::math::Vector3T<float>>*)puVar13);
                pfVar7 = (float*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar8);
                if (*pfVar7 != 0.0) {
                    uVar10 = uVar10 + 128;
                }
            } else {
                uVar10 = uVar10 + 16;
            }
        }
        return uVar10;
    }

    // 0x1002c8120, 112 bytes, placed by class name
    // RotTrans::Serialise(PacketJ<Array<unsigned char, eastl::allocator> >&, bool)
    void RotTrans::Serialise(PacketJ* param_1, bool param_2) {
        QuaternionT<float>* this_00;
        Vector3T<float>* pVVar1;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator->(
                (shared_ptr<jag::math::QuaternionT<float>>*)this);
            jag::math::QuaternionT<float>::Serialise<PacketJ<Array<unsigned char, eastl::allocator>>>(this_00, param_1,
                                                                                                      false);
            pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
            jag::math::Vector3T<float>::Serialise<PacketJ<Array<unsigned char, eastl::allocator>>>(pVVar1, param_1,
                                                                                                   false);
            pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
            jag::math::Vector3T<float>::Serialise<PacketJ<Array<unsigned char, eastl::allocator>>>(pVVar1, param_1,
                                                                                                   false);
        } else {
            SerialiseLightweight(this, param_1);
        }
    }

    // 0x1002c8190, 560 bytes, placed by class name
    // RotTrans::SerialiseLightweight(PacketJ<Array<unsigned char, eastl::allocator> >&)
    /* WARNING: Type propagation algorithm not settling */
    /* RotTrans::SerialiseLightweight(PacketJ<Array<unsigned
   char, eastl::allocator> >&) */

    void RotTrans::SerialiseLightweight(PacketJ* param_1) {
        uint uVar1;
        QuaternionT<float>* this_00;
        long lVar2;
        Layout* pLVar3;
        Vector2T<int>* pVVar4;
        float* pfVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar6;
        vector* pvVar7;
        type* ptVar8;

        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator->(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        this_00->Normalise();
        uVar1 = GetLightweightMask(this);
        ptVar8 = (type*)(ulong)uVar1;
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)ptVar8);
        if ((uVar1 & 1) != 0) {
            pfVar5 = (float*)shared_ptr<jag::math::QuaternionT<float>>::operator->(
                (shared_ptr<jag::math::QuaternionT<float>>*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)(uint)(int)(*pfVar5 * 32768.0));
            lVar2 =
                shared_ptr<jag::math::QuaternionT<float>>::operator->((shared_ptr<jag::math::QuaternionT<float>>*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1,
                (ulong)(uint)(int)(*(float*)(lVar2 + 4) * 32768.0));
            lVar2 =
                shared_ptr<jag::math::QuaternionT<float>>::operator->((shared_ptr<jag::math::QuaternionT<float>>*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1,
                (ulong)(uint)(int)(*(float*)(lVar2 + 8) * 32768.0));
            lVar2 =
                shared_ptr<jag::math::QuaternionT<float>>::operator->((shared_ptr<jag::math::QuaternionT<float>>*)this);
            ptVar8 = (type*)(ulong)(uint)(int)(*(float*)(lVar2 + 12) * 32768.0);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)ptVar8);
        }
        if ((uVar1 & 2) != 0) {
            pLVar3 = (Layout*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar8);
            ptVar8 = (type*)(ulong)(uint)(int)*(float*)pvVar7;
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)ptVar8);
        }
        if ((uVar1 & 4) != 0) {
            pVVar4 = (Vector2T<int>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
            pfVar5 = (float*)pVVar4->y();
            ptVar8 = (type*)(ulong)(uint)(int)*pfVar5;
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)ptVar8);
        }
        if ((uVar1 & 8) != 0) {
            pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)
                         shared_ptr<jag::math::Vector3T<float>>::operator->(
                             (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
            pfVar5 = (float*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar6);
            ptVar8 = (type*)(ulong)(uint)(int)*pfVar5;
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)ptVar8);
        }
        if ((uVar1 & 16) == 0) {
            if ((uVar1 & 32) != 0) {
                pLVar3 = (Layout*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                    (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
                pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar8);
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)param_1,
                    (ulong)(uint)(int)(*(float*)pvVar7 * 128.0));
            }
            if ((uVar1 & 64) != 0) {
                pVVar4 = (Vector2T<int>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                    (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
                pfVar5 = (float*)pVVar4->y();
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)(uint)(int)(*pfVar5 * 128.0));
            }
            if (-1 < (char)uVar1) {
                return;
            }
            pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)
                         shared_ptr<jag::math::Vector3T<float>>::operator->(
                             (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
            pvVar7 = (vector*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar6);
        } else {
            pLVar3 = (Layout*)shared_ptr<jag::math::Vector3T<float>>::operator->(
                (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar8);
        }
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)(uint)(int)(*(float*)pvVar7 * 128.0));
    }

    // 0x1002c84e0, 720 bytes, placed by class name
    // RotTrans::DeserialiseLightweight(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void RotTrans::DeserialiseLightweight(PacketJ* param_1) {
        byte bVar1;
        short sVar2;
        shared_ptr local_60;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_30;
        float local_2c;

        bVar1 = param_1->g1();
        local_50 = 0.0;
        local_4c = 0.0;
        local_48 = 0.0;
        local_44 = 1.0;
        if ((bVar1 & 1) != 0) {
            sVar2 = param_1->g2s();
            local_50 = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = param_1->g2s();
            local_4c = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = param_1->g2s();
            local_48 = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = param_1->g2s();
            local_44 = (float)(int)sVar2 * 3.0517578e-05;
        }
        make_shared<jag::math::QuaternionT<float>, float&, float&, float&, float&>((jag*)&local_60, &local_50,
                                                                                   &local_4c, &local_48, &local_44);
        shared_ptr<jag::math::QuaternionT<float>>::operator=((shared_ptr<jag::math::QuaternionT<float>>*)this,
                                                             &local_60);
        local_60.~shared_ptr();
        local_40 = 0.0;
        local_3c = 0.0;
        local_38 = 0.0;
        if ((bVar1 & 2) != 0) {
            sVar2 = param_1->g2s();
            local_40 = (float)(int)sVar2;
        }
        if ((bVar1 & 4) != 0) {
            sVar2 = param_1->g2s();
            local_3c = (float)(int)sVar2;
        }
        if ((bVar1 & 8) != 0) {
            sVar2 = param_1->g2s();
            local_38 = (float)(int)sVar2;
        }
        make_shared<jag::math::Vector3T<float>, float&, float&, float&>((jag*)&local_60, &local_40, &local_3c,
                                                                        &local_38);
        shared_ptr<jag::math::Vector3T<float>>::operator=((shared_ptr<jag::math::Vector3T<float>>*)&field_32,
                                                          &local_60);
        local_60.~shared_ptr();
        local_34 = 1.0;
        local_30 = 1.0;
        local_2c = 1.0;
        if ((bVar1 & 16) == 0) {
            if ((bVar1 & 32) != 0) {
                sVar2 = param_1->g2s();
                local_34 = (float)(int)sVar2 * 0.0078125;
            }
            if ((bVar1 & 64) != 0) {
                sVar2 = param_1->g2s();
                local_30 = (float)(int)sVar2 * 0.0078125;
            }
            if ((char)bVar1 < '\0') {
                sVar2 = param_1->g2s();
                local_2c = (float)(int)sVar2 * 0.0078125;
            }
        } else {
            sVar2 = param_1->g2s();
            local_34 = (float)(int)sVar2 * 0.0078125;
            local_30 = local_34;
            local_2c = local_34;
        }
        make_shared<jag::math::Vector3T<float>, float&, float&, float&>((jag*)&local_60, &local_34, &local_30,
                                                                        &local_2c);
        shared_ptr<jag::math::Vector3T<float>>::operator=((shared_ptr<jag::math::Vector3T<float>>*)&field_16,
                                                          &local_60);
        local_60.~shared_ptr();
    }

    // 0x1002c8910, 80 bytes, placed by class name
    // RotTrans::Idenity()
    void RotTrans::Idenity() {
        QuaternionT<float>* this_00;
        Vector3T<float>* pVVar1;

        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator->(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        this_00->SetToIdentity();
        pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        pVVar1->SetToZero();
        pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
        pVVar1->Set(1.0, 1.0, 1.0);
    }

    // 0x1002c89b0, 256 bytes, placed by class name
    // RotTrans::Inverse()
    void RotTrans::Inverse() {
        Vector3T<float>* pVVar1;
        QuaternionT* pQVar2;
        Layout* this_00;
        vector* pvVar3;
        float* pfVar4;
        Vector2T<int>* this_01;
        long lVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        undefined1* this_03;
        QuaternionT<float> local_30[16];
        float local_20;
        float local_1c;

        shared_ptr<jag::math::QuaternionT<float>>::operator->((shared_ptr<jag::math::QuaternionT<float>>*)this);
        local_30->Conjugate();
        pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        pVVar1->Negate();
        pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        pQVar2 = (QuaternionT*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        pVVar1->Rotate(pQVar2);
        this_03 = &field_16;
        this_00 = (Layout*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)this_03);
        pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pQVar2);
        local_20 = 1.0;
        local_1c = 1.0 / *(float*)pvVar3;
        pfVar4 = (float*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)this_03);
        *pfVar4 = local_1c;
        this_01 = (Vector2T<int>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)this_03);
        pfVar4 = (float*)this_01->y();
        local_1c = 1.0 / *pfVar4;
        lVar5 = shared_ptr<jag::math::Vector3T<float>>::operator->((shared_ptr<jag::math::Vector3T<float>>*)this_03);
        *(float*)(lVar5 + 4) = local_1c;
        this_02 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                 eastl::allocator, 0>*)
                shared_ptr<jag::math::Vector3T<float>>::operator->((shared_ptr<jag::math::Vector3T<float>>*)this_03);
        pfVar4 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_02);
        local_20 = local_20 / *pfVar4;
        lVar5 = shared_ptr<jag::math::Vector3T<float>>::operator->((shared_ptr<jag::math::Vector3T<float>>*)this_03);
        *(float*)(lVar5 + 8) = local_20;
    }

    // 0x1002c8c00, 64 bytes, placed by class name
    // RotTrans::Inverse(RotTrans const&)
    RotTrans* RotTrans::Inverse(RotTrans* param_1) {
        RotTrans* this_00;

        make_shared<RotTrans, RotTrans_const&>((jag*)this, param_1);
        this_00 = (RotTrans*)shared_ptr<RotTrans>::operator->((shared_ptr<RotTrans>*)this);
        Inverse(this_00);
        return this;
    }

    // 0x1002c8d20, 160 bytes, placed by class name
    // RotTrans::Multiply(RotTrans const&)
    void RotTrans::Multiply(RotTrans* param_1) {
        QuaternionT* pQVar1;
        QuaternionT<float>* this_00;
        Vector3T<float>* pVVar2;
        Vector3T* pVVar3;

        pQVar1 = (QuaternionT*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)param_1);
        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        jag::math::QuaternionT<float>::operator*=(this_00, pQVar1);
        pVVar2 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        pQVar1 = (QuaternionT*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)param_1);
        pVVar2->Rotate(pQVar1);
        pVVar3 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_32);
        pVVar2 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        jag::math::Vector3T<float>::operator+=(pVVar2, pVVar3);
        pVVar3 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_16);
        pVVar2 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
        jag::math::Vector3T<float>::operator*=(pVVar2, pVVar3);
    }

    // 0x1002c8f40, 64 bytes, placed by class name
    // RotTrans::Multiply(RotTrans const&, RotTrans const&)
    RotTrans* RotTrans::Multiply(RotTrans* param_1, RotTrans* param_2) {
        RotTrans* this_00;

        make_shared<RotTrans, RotTrans_const&>((jag*)this, param_1);
        this_00 = (RotTrans*)shared_ptr<RotTrans>::operator->((shared_ptr<RotTrans>*)this);
        Multiply(this_00, param_2);
        return this;
    }

    // 0x1002c8f80, 64 bytes, placed by class name
    // RotTrans::Prerotate(jag::math::QuaternionT<float>&)
    void RotTrans::Prerotate(QuaternionT* param_1) {
        QuaternionT<float>* this_00;
        Vector3T<float>* this_01;

        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        jag::math::QuaternionT<float>::operator*=(this_00, param_1);
        this_01 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
        jag::math::Vector3T<float>::operator*=(this_01, param_1);
    }

    // 0x1002c9200, 80 bytes, placed by class name
    // RotTrans::Rotate(jag::math::QuaternionT<float>&)
    void RotTrans::Rotate(QuaternionT* param_1) {
        QuaternionT<float>* this_00;
        Vector3T<float>* pVVar1;

        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        jag::math::QuaternionT<float>::operator*=(this_00, param_1);
        pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        pVVar1->Rotate(param_1);
        pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
        pVVar1->Rotate(param_1);
    }

    // 0x1002c9250, 48 bytes, placed by class name
    // RotTrans::Translate(jag::math::Vector3T<float>)
    void RotTrans::Translate(undefined8 param_1, undefined4 param_2, long param_3) {
        Vector3T<float>* this;
        undefined8 local_18;
        undefined4 local_10;

        local_18 = param_1;
        local_10 = param_2;
        this = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)(param_3 + 32));
        jag::math::Vector3T<float>::operator+=(this, (Vector3T*)&local_18);
    }

    // 0x1002c9280, 112 bytes, placed by class name
    // RotTrans::Translate(float, float, float)
    void RotTrans::Translate(float param_1, float param_2, float param_3) {
        float* pfVar1;
        long lVar2;
        undefined1* this_00;

        this_00 = &field_32;
        pfVar1 = (float*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)this_00);
        *pfVar1 = param_1 + *pfVar1;
        lVar2 = shared_ptr<jag::math::Vector3T<float>>::operator->((shared_ptr<jag::math::Vector3T<float>>*)this_00);
        *(float*)(lVar2 + 4) = param_2 + *(float*)(lVar2 + 4);
        lVar2 = shared_ptr<jag::math::Vector3T<float>>::operator->((shared_ptr<jag::math::Vector3T<float>>*)this_00);
        *(float*)(lVar2 + 8) = param_3 + *(float*)(lVar2 + 8);
    }

    // 0x1002c92f0, 96 bytes, placed by class name
    // RotTrans::Multiply(float)
    void RotTrans::Multiply(float param_1) {
        Vector4T<float>* this_00;
        Vector3T<float>* pVVar1;

        this_00 = (Vector4T<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        jag::math::Vector4T<float>::operator*=(this_00, param_1);
        pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        jag::math::Vector3T<float>::operator*=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
        jag::math::Vector3T<float>::operator*=(pVVar1, param_1);
    }

    // 0x1002c9390, 128 bytes, placed by class name
    // RotTrans::Add(RotTrans const&)
    void RotTrans::Add(RotTrans* param_1) {
        QuaternionT* pQVar1;
        QuaternionT<float>* this_00;
        Vector3T* pVVar2;
        Vector3T<float>* pVVar3;

        pQVar1 = (QuaternionT*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)param_1);
        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        jag::math::QuaternionT<float>::operator+=(this_00, pQVar1);
        pVVar2 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_32);
        pVVar3 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        jag::math::Vector3T<float>::operator+=(pVVar3, pVVar2);
        pVVar2 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_16);
        pVVar3 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
        jag::math::Vector3T<float>::operator+=(pVVar3, pVVar2);
    }

    // 0x1002c9410, 32 bytes, placed by class name
    // RotTrans::Normalize()
    void RotTrans::Normalize() {
        QuaternionT<float>* this_00;

        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator->(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        this_00->Normalise();
    }

    // 0x1002c9430, 160 bytes, placed by class name
    // RotTrans::Interpolate(RotTrans&, float)
    void RotTrans::Interpolate(RotTrans* param_1, float param_2) {
        QuaternionT* pQVar1;
        Vector3T<float>* pVVar2;
        Vector3T* pVVar3;
        QuaternionT<float> local_38[20];

        pQVar1 = (QuaternionT*)shared_ptr<jag::math::QuaternionT<float>>::operator->(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        shared_ptr<jag::math::QuaternionT<float>>::operator*((shared_ptr<jag::math::QuaternionT<float>>*)param_1);
        local_38->Interpolate(pQVar1, param_2);
        pVVar2 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
        pVVar3 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_32);
        pVVar2->Interpolate(pVVar3, param_2);
        pVVar2 = (Vector3T<float>*)shared_ptr<jag::math::Vector3T<float>>::operator->(
            (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
        pVVar3 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_16);
        pVVar2->Interpolate(pVVar3, param_2);
    }

    // 0x1002c95d0, 80 bytes, placed by class name
    // RotTrans::ToString()
    RotTrans* RotTrans::ToString() {
        eastl::string local_30[32];

        eastl::string::basic_string(local_30);
        new (this) eastl::string();
        eastl::string::~basic_string(local_30);
        return this;
    }

    // 0x1002c9620, 112 bytes, placed by class name
    // RotTrans::ToAffineTransform3()
    undefined8 RotTrans::ToAffineTransform3() {
        AffineTransform3* this_00;
        undefined8 uVar1;
        jag local_28[16];

        make_shared<AffineTransform3>(local_28);
        this_00 = (AffineTransform3*)shared_ptr<AffineTransform3>::operator->((shared_ptr<AffineTransform3>*)local_28);
        this_00->Set(this);
        uVar1 = shared_ptr<AffineTransform3>::operator*((shared_ptr<AffineTransform3>*)local_28);
        local_28->~shared_ptr();
        return uVar1;
    }

    // 0x1002c9690, 112 bytes, placed by class name
    // RotTrans::IsIdentity() const
    bool RotTrans::IsIdentity() {
        bool bVar2;
        QuaternionT<float>* this_00;
        Vector3T* pVVar3;

        this_00 = (QuaternionT<float>*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)this);
        if (jag::math::QuaternionT<float>::operator==(this_00, (QuaternionT*)PTR_IDENTITY_100ee6678) != '\0') {
            pVVar3 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
                (shared_ptr<jag::math::Vector3T<float>>*)&field_32);
            bVar2 = jag::math::operator==(pVVar3, (Vector3T*)PTR_ZERO_100ee66e8);
            if (bVar2) {
                pVVar3 = (Vector3T*)shared_ptr<jag::math::Vector3T<float>>::operator*(
                    (shared_ptr<jag::math::Vector3T<float>>*)&field_16);
                bVar2 = jag::math::operator==(pVVar3, (Vector3T*)PTR_ONE_100ee66d8);
                return bVar2;
            }
        }
        return false;
    }

} // namespace jag::oldscape::math

namespace jag {
    // 0x1002c7b90, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<math::QuaternionT<float> >::type make_shared<math::QuaternionT<float>>()
    jag* make_shared<math::QuaternionT<float>>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        QuaternionT* local_28[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<math::QuaternionT<float>>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared_trivial<math::QuaternionT<float>>, int, math::QuaternionT<float>*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1002c7c60, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<math::Vector3T<float> >::type make_shared<math::Vector3T<float>>()
    jag* make_shared<math::Vector3T<float>>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        Vector3T* local_28[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<math::Vector3T<float>>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<math::Vector3T<float>>, int, math::Vector3T<float>*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1002c7d30, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<math::Vector3T<float> >::type make_shared<math::Vector3T<float>, float, float, float>(float&&, float&&, float&&)
    /* shared_ptr_if_not_array<math::Vector3T<float> >::type
   make_shared<math::Vector3T<float>, float&, float&, float&>(float&, float&, float&) */

    jag* make_shared<math::Vector3T<float>, float&, float&, float&>(float* param_1, float* param_2, float* param_3) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_44;
        Vector3T* local_40[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<math::Vector3T<float>, float&, float&, float&>((void*)((long)pvVar1 + 16),
                                                                                       param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<math::Vector3T<float>>, int, math::Vector3T<float>*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    // 0x1002c7e80: the linker folded this into math::RotTrans::~RotTrans(), which has identical code
    ResolvedModel::~ResolvedModel();

} // namespace jag::oldscape::dash3d
