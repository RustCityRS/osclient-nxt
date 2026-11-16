// libs/oldscape/osrendercore/rseven/OSMaterialRawProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "OSMaterialRawProvider.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"

namespace jag::oldscape::rseven {
    // 0x1001bcba0, 976 bytes, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::LoadMaterials(jagex3::Js5&)
    void OSRenderCore_MaterialRawProvider::LoadMaterials(Js5* param_1) {
        bool bVar1;
        byte bVar3;
        short sVar4;
        int iVar5;
        undefined* puVar6;
        undefined8 uVar7;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar8;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        _func_decltype_nullptr* p_Var9;
        undefined1* this_01;
        _func_decltype_nullptr* p_Var10;
        ushort uVar11;
        uint uVar12;
        shared_ptr<RSevenDebugPresetProvider> local_68[16];
        _func_decltype_nullptr* local_58;
        atomic<bool>* local_48;
        ushort local_3a;
        uint local_38;
        char local_33;
        byte local_32;
        char local_31;

        bVar1 = (&field_24)->operator_cast_to_bool();
        if (!bVar1) {
            puVar6 = (undefined*)param_1->GetIndexIsLoaded();
            if (puVar6 == DataStatus::READY) {
                local_48 = (atomic<bool>*)&field_24;
                iVar5 = param_1->GetFileIdLimit(0);
                uVar12 = iVar5 + 1;
                this_01 = &field_32;
                uVar7 = this_01->resize((long)(int)uVar12);
                if (iVar5 < 0) {
                    local_38 = (uint)CONCAT71((int7)((ulong)uVar7 >> 8), 1);
                } else {
                    local_58 = (_func_decltype_nullptr*)(ulong)uVar12;
                    local_38 = (uint)CONCAT71((uint7)(uint3)(uVar12 >> 8), 1);
                    p_Var10 = (_func_decltype_nullptr*)0;
                    do {
                        p_Var9 = p_Var10;
                        pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)eastl::
                            vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                                (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_01,
                                (ulong)p_Var10);
                        if (pPVar8->IsValid() == '\0') {
                            new (local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var9);
                            puVar6 = (undefined*)((shared_ptr*)param_1)
                                         ->GetFile((int)(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_68,
                                                   0, (array*)((ulong)p_Var10 & 4294967295));
                            if (puVar6 == DataStatus::NOTLOADED) {
                                local_38 = 0;
                            } else if (puVar6 == DataStatus::READY) {
                                this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_68);
                                this_00->g2();
                                local_31 = this_00->g1();
                                bVar3 = this_00->g1();
                                local_3a = this_00->g2();
                                this_00->g4();
                                if (1 < bVar3) {
                                    iVar5 = bVar3 - 1;
                                    do {
                                        this_00->g8();
                                        iVar5 = iVar5 + -1;
                                    } while (iVar5 != 0);
                                }
                                local_33 = this_00->g1();
                                local_32 = this_00->g1();
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                bVar1 = local_31 == '\x01';
                                pPVar8->Reserve(24 - (ulong)bVar1);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8, 0);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8, 1);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8, 0);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                uVar11 = local_3a;
                                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(pPVar8,
                                                                                         (uint)(local_3a != 65535));
                                if (uVar11 != 65535) {
                                    pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)eastl::vector<
                                        PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(pPVar8, (uint)uVar11);
                                }
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    pPVar8, (ulong)(*(uint*)(graphicutils::TextureWrapMode::REPEAT + 8) * 8 |
                                                    *(uint*)(graphicutils::TextureWrapMode::REPEAT + 8)));
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(pPVar8, 12);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8, 0);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8, 1);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8,
                                                                                                   (ulong)!bVar1);
                                if (local_31 != '\x01') {
                                    pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)eastl::vector<
                                        PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8, 129);
                                }
                                if ((byte)(local_33 - 1U) < 4) {
                                    uVar11 = (ushort)local_32;
                                    switch (local_33) {
                                    case '\x01':
                                        uVar11 = -(ushort)local_32;
                                    case '\x03':
                                        uVar12 = 2;
                                        break;
                                    case '\x02':
                                        uVar11 = -uVar11;
                                    case '\x04':
                                        uVar12 = 1;
                                    }
                                } else {
                                    uVar12 = 0;
                                    uVar11 = 0;
                                }
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8,
                                                                                                   (ulong)uVar12);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                sVar4 = jag::graphics::MaterialRaw::AnimationSpeedPackValue((float)(int)(short)uVar11 *
                                                                                            0.390625);
                                PacketT<Array<unsigned char, eastl::allocator>>::p2<short>(pPVar8, sVar4);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar8, 0);
                                pPVar8 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            this_01,
                                        (ulong)p_Var10);
                                pPVar8->SetPos(0);
                            }
                            local_68->~shared_ptr();
                        }
                        p_Var10 = p_Var10 + 1;
                    } while (p_Var10 != local_58);
                }
                if ((local_38 & 1) != 0) {
                    std::atomic<bool>::operator=(local_48, true);
                }
            }
        }
    }

    // 0x1001cadd0, 208 bytes, placed by __FILE__ string
    // OSRenderCore_MaterialRawProvider::GetMaterialRaw(jag::graphics::MaterialRaw&, unsigned int)
    ulong OSRenderCore_MaterialRawProvider::GetMaterialRaw(MaterialRaw* param_1, uint param_2) {
        ulong uVar3;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar4;
        PacketT* pPVar5;
        undefined1* this_00;

        if (!(&field_24)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/rseven/OSMaterialRawProvider.cpp",
                            18, "Use of OSRenderCore_MaterialRawProvider before initialization");
        }
        this_00 = &field_32;
        uVar3 = this_00->size();
        if (uVar3 <= (ulong)param_2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/rseven/OSMaterialRawProvider.cpp",
                            23, "Invalid material id %d", (ulong)param_2);
        }
        pPVar4 = (PacketT<Array<unsigned char, eastl::allocator>>*)
            eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_00, (ulong)param_2);
        if (pPVar4->IsValid() == '\0') {
            uVar3 = 0;
        } else {
            pPVar4 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                    (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_00,
                    (ulong)param_2);
            pPVar4->SetPos(0);
            pPVar5 =
                (PacketT*)eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                    (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_00,
                    (ulong)param_2);
            param_1->Decode(param_2, pPVar5);
            uVar3 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
        }
        return uVar3 & 4294967295;
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001bd010, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_Common::SetThreadID()
    void OSRenderCore_RenderThread_Common::SetThreadID() {
        field_96 = this_thread::GetThreadID();
    }

    // 0x1001bd030, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_Impl::TexturesUploaded()
    void OSRenderCore_Impl::TexturesUploaded() {
        (&field_55398592)->operator_cast_to_bool();
    }

} // namespace jag::oldscape
