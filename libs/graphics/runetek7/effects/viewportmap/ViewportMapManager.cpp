// libs/graphics/runetek7/effects/viewportmap/ViewportMapManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ViewportMapManager.h"

namespace jag::graphics {
    // 0x10091f740, 16 bytes, complete-object constructor, placed by class name and debug map
    // ViewportMapManager::ViewportMapManager(TextureManager&, SkyBoxManager&): jumps straight to the base-object constructor

    // 0x10091f870, 128 bytes, placed by class name and debug map
    // ViewportMapManager::GetViewportMapTexture(int) const
    undefined8 ViewportMapManager::GetViewportMapTexture(int param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        ViewportMapEntry* pVVar3;
        ViewportMapEntry* pVVar4;
        Layout* this_00;

        if (param_1 < 0) {
            uVar1 = (field_8, -3 - param_1)->GetSkyBoxTexture();
        } else {
            this_00 = (Layout*)(field_20 + 4);
            uVar1 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            uVar2 = this_00->end();
            pVVar3 = eastl::find_if<ViewportMapEntry_const*, int->GetViewportMapTexture() const ::__10>(uVar1, uVar2,
                                                                                                        param_1);
            pVVar4 = (ViewportMapEntry*)this_00->end();
            if (pVVar3 == pVVar4) {
                uVar1 = 0;
            } else {
                uVar1 = (&pVVar3->field_8)->end();
            }
        }
        return uVar1;
    }

    // 0x10091f930, 512 bytes, placed by class name and debug map
    // ViewportMapManager::RegisterViewportMapID(int)
    void ViewportMapManager::RegisterViewportMapID(int param_1) {
        Layout* this_00;
        uint uVar1;
        undefined4 uVar2;
        ulonglong uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        ViewportMapEntry* pVVar7;
        ViewportMapEntry* pVVar8;
        long lVar9;
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* this_01;
        uint in_stack_ffffffffffffff60;
        undefined1 local_98[16];
        ViewportMapEntry local_88;
        shared_ptr local_68;
        undefined8 local_58;
        uint local_4c;
        uint local_48;
        uint local_44;
        shared_ptr local_40;

        if (param_1 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("viewportMapID != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "viewportmap/ViewportMapManager.cpp",
                      29, (char*)0);
        }
        uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        if (param_1 < 0) {
            if (-1 < -3 - param_1) {
                local_98->RegisterSkyBox((int)field_8);
                local_98->~shared_ptr();
            }
        } else {
            this_00 = (Layout*)(field_20 + 4);
            uVar5 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            uVar6 = this_00->end();
            pVVar7 = eastl::find_if<ViewportMapEntry*, int->RegisterViewportMapID()::__9>(uVar5, uVar6, param_1);
            pVVar8 = (ViewportMapEntry*)this_00->end();
            if (pVVar7 == pVVar8) {
                TextureManager::GetTextureData((TextureType*)&local_40, (uint)field_0,
                                               (TextureFormatBitSet)(uint)TextureType::TEXTURE);
                if (shared_ptr::operator_cast_to_bool(&local_40)) {
                    lVar9 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_40);
                    local_4c = *(uint*)(lVar9 + 16);
                    lVar9 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_40);
                    local_48 = *(uint*)(lVar9 + 20);
                    this_01 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)
                                  shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_40);
                    local_58 = std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(this_01);
                    lVar9 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_40);
                    local_44 = *(uint*)(lVar9 + 12);
                    lVar9 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_40);
                    uVar1 = *(uint*)(lVar9 + 8);
                    uVar2 = *(undefined4*)field_20;
                    lVar9 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_40);
                    graphicutils::CreateHALTexture2D<render::Texture2D>(
                        &local_68, (graphicutils*)(ulong)local_4c, local_48, (uint)local_58, (uchar*)(ulong)local_44,
                        uVar1, 1, true, true, SUB41(uVar2, 0), (TextureFormatBitSet) * (uint*)(lVar9 + 12),
                        in_stack_ffffffffffffff60);
                    new (&local_88) ViewportMapEntry(param_1, &local_68);
                    this_00->push_back(&local_88);
                    local_88.~pair();
                    local_68.~shared_ptr();
                }
                local_40.~shared_ptr();
            } else {
                pVVar7->field_24 = uVar4;
            }
        }
    }

    // 0x10091fb30, 64 bytes, base-object constructor, placed by class name
    // ViewportMapManager::ViewportMapManager(TextureManager&, SkyBoxManager&)
    void ViewportMapManager::ViewportMapManager(TextureManager* param_1, SkyBoxManager* param_2) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = 0;
        new (field_20) callstack::Callstack();
        new ((field_20 + 4)) eastl::vector<ViewportMapEntry, eastl::allocator>();
    }

    // 0x10091fb80, 16 bytes, placed by class name
    // ViewportMapManager::Initialise()
    undefined1 ViewportMapManager::Initialise() {
        CreateRenderingResources();
        return 1;
    }

    // 0x10091fb90, 48 bytes, placed by class name
    // ViewportMapManager::CreateRenderingResources()
    undefined8 ViewportMapManager::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10[8];

        local_10->~AutoSingleton("ViewportMap_Manager");
        return 1;
    }

    // 0x10091fbc0, 16 bytes, placed by class name
    // ViewportMapManager::Destroy()
    void ViewportMapManager::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x10091fbd0, 48 bytes, placed by class name
    // ViewportMapManager::DestroyRenderingResources()
    void ViewportMapManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("ViewportMap_Manager");
        ((field_20 + 4))->clear();
    }

    // 0x10091fd50, 96 bytes, placed by class name
    // ViewportMapManager::Update()
    void ViewportMapManager::Update() {
        ulonglong uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        ViewportMapEntry* pVVar4;
        ViewportMapEntry* pVVar5;
        Layout* this_00;

        uVar1 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        this_00 = (Layout*)(field_20 + 4);
        uVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        uVar3 = this_00->end();
        pVVar4 = std::remove_if<ViewportMapEntry*, ViewportMapManager::Update()::__11>(uVar2, uVar3, uVar1);
        pVVar5 = (ViewportMapEntry*)this_00->end();
        this_00->erase(pVVar4, pVVar5);
    }

    // 0x10091feb0, 224 bytes, placed by class name
    // ViewportMapManager::SetTextureMode(TextureMode)
    void ViewportMapManager::SetTextureMode(int param_2) {
        undefined1* this_00;
        MapArea* pMVar2;
        RenderDeviceCaps* this_01;
        long lVar3;
        undefined8 uVar4;
        Singleton<render::RenderDevice>* pSVar5;

        if (field_16 != param_2) {
            field_16 = param_2;
            this_00 = field_20;
            pSVar5 = (Singleton<render::RenderDevice>*)this_00;
            new (this_00) callstack::Callstack();
            pMVar2 = (MapArea*)pSVar5->Instance();
            this_01 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            if ((this_01->GetCompressedTextures() == '\0') || (field_16 == 2)) {
                uVar4 = 5;
            } else {
                pMVar2 = (MapArea*)this_01->Instance();
                lVar3 = pMVar2->GetOrigin();
                if (*(char*)(lVar3 + 161) == '\0') {
                    pMVar2 = (MapArea*)pMVar2->Instance();
                    lVar3 = pMVar2->GetOrigin();
                    if (*(char*)(lVar3 + 162) == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/effects/viewportmap/ViewportMapManager.cpp",
                                        146, (char*)0);
                    }
                    uVar4 = 2;
                } else {
                    uVar4 = 1;
                }
            }
            pSVar5 = (Singleton<render::RenderDevice>*)this_00;
            this_00->AddFormatType(uVar4);
            pMVar2 = (MapArea*)pSVar5->Instance();
            lVar3 = pMVar2->GetOrigin();
            if (*(char*)(lVar3 + 147) != '\0') {
                this_00->AddFormatType(7);
            }
            DestroyRenderingResources(this);
            CreateRenderingResources();
        }
    }

    // 0x100929140, 16 bytes, placed by class name
    // ViewportMapManager::RegisterViewportMapID(int)::$_9::operator()(ViewportMapEntry const&) const
    /* ViewportMapManager::RegisterViewportMapID(int)::$_9::TEMPNAMEPLACEHOLDERVALUE(ViewportMapEntry
   const&) const */

    undefined4 ViewportMapManager::RegisterViewportMapID(int)::$_9::operator()(ViewportMapEntry* param_1) {
        return CONCAT31((int3)((uint)param_1->field_0 >> 8), param_1->field_0 == *(int*)this);
    }

    // 0x1009292a0, 16 bytes, placed by class name
    // ViewportMapManager::GetViewportMapTexture(int) const::$_10::operator()(ViewportMapEntry const&) const
    /* ViewportMapManager::GetViewportMapTexture(int)
   const::$_10::TEMPNAMEPLACEHOLDERVALUE(ViewportMapEntry const&) const */

    _func_GetViewportMapTexture_int* const ::$_10::operator()(ViewportMapEntry * param_1) {
        return (_func_GetViewportMapTexture_int*)(ulong)CONCAT31((int3)((uint)param_1->field_0 >> 8),
                                                                 param_1->field_0 == *(int*)this);
    }

    // 0x100929300, 32 bytes, placed by class name
    // ViewportMapManager::Update()::$_11::operator()(ViewportMapEntry&) const
    /* ViewportMapManager::Update()::$_11::TEMPNAMEPLACEHOLDERVALUE(ViewportMapEntry&)
   const */

    undefined8 ViewportMapManager::Update()::$_11::operator()(ViewportMapEntry* param_1) {
        ulong uVar1;

        uVar1 = *(long*)this - param_1->field_24;
        return CONCAT71((int7)(uVar1 >> 8), 10000 < uVar1);
    }

} // namespace jag::graphics
