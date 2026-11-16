// libs/graphics/runetek7/effects/viewportmap/ViewportMapManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ViewportMapManager.h"

namespace jag::graphics {
    // 0x10091f870
    uint64_t ViewportMapManager::GetViewportMapTexture(int arg1) const {
        ViewportMapEntry* pVVar1;
        ViewportMapEntry* pVVar2;
        uint64_t uVar3;
        Layout* this_00;

        if (arg1 < 0) {
            uVar3 = field_8->GetSkyBoxTexture(-3 - arg1);
        } else {
            this_00 = (Layout*)(field_20 + 4);
            pVVar1 = (ViewportMapEntry*)this_00->HeapBeginPtr();
            pVVar2 = (ViewportMapEntry*)this_00->end();
            pVVar1 = eastl::find_if<ViewportMapEntry const*, int->GetViewportMapTexture() const ::__10>(
                pVVar1, pVVar2, (__10*)(unsigned long)(unsigned int)arg1);
            pVVar2 = (ViewportMapEntry*)this_00->end();
            if (pVVar1 == pVVar2) {
                uVar3 = 0;
            } else {
                uVar3 = pVVar1->field_8.end();
            }
        }
        return uVar3;
    }

    // 0x10091f930
    void ViewportMapManager::RegisterViewportMapID(int arg1) {
        Layout* this_00;
        uint32_t uVar1;
        unsigned int arg10;
        ViewportMapEntry* pVVar4;
        ViewportMapEntry* pVVar5;
        long lVar6;
        ViewportMapEntry local_88;
        shared_ptr<render::Texture2D> local_68;
        uint64_t local_58;
        unsigned int local_4c;
        unsigned int local_48;
        unsigned int local_44;
        shared_ptr local_40;

        if (arg1 == -1) {
            LogAssert("viewportMapID != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "viewportmap/ViewportMapManager.cpp",
                      29, nullptr);
        }
        unsigned long long uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        if (arg1 < 0) {
            if (-1 < -3 - arg1) {
                (field_8->RegisterSkyBox(-3 - arg1)).~shared_ptr();
            }
        } else {
            this_00 = (Layout*)(field_20 + 4);
            pVVar4 = (ViewportMapEntry*)this_00->HeapBeginPtr();
            pVVar5 = (ViewportMapEntry*)this_00->end();
            pVVar4 = eastl::find_if<ViewportMapEntry*, int->RegisterViewportMapID()::__9>(
                pVVar4, pVVar5, (__9*)(unsigned long)(unsigned int)arg1);
            pVVar5 = (ViewportMapEntry*)this_00->end();
            if (pVVar4 == pVVar5) {
                local_40 = field_0->GetTextureData((TextureType*)TextureType::TEXTURE, arg1,
                                                   (TextureFormatBitSet) * (unsigned int*)field_20);
                if (shared_ptr::operator_cast_to_bool(&local_40) != '\0') {
                    lVar6 = local_40.operator->();
                    local_4c = *(unsigned int*)(lVar6 + 16);
                    lVar6 = local_40.operator->();
                    local_48 = *(unsigned int*)(lVar6 + 20);
                    local_58 = ((unique_ptr<unsigned char[]>*)local_40.operator->())->get();
                    lVar6 = local_40.operator->();
                    local_44 = *(unsigned int*)(lVar6 + 12);
                    lVar6 = local_40.operator->();
                    uVar1 = *(uint32_t*)(lVar6 + 8);
                    arg10 = *(unsigned int*)field_20;
                    local_40.operator->();
                    graphicutils::CreateHALTexture2D<render::Texture2D>(
                        (unsigned int)&local_68, local_4c, (unsigned char*)(unsigned long)local_48,
                        (unsigned int)local_58, local_44, (uint8_t)uVar1, true, true, (TextureFormatBitSet)1, arg10);
                    local_88 = ViewportMapEntry(arg1, local_68);
                    this_00->push_back(local_88);
                }
            } else {
                pVVar4->field_24 = uVar3;
            }
        }
    }

    // 0x10091fb30
    ViewportMapManager::ViewportMapManager(TextureManager& textureManager, SkyBoxManager& skyBoxManager)
        : field_0(textureManager), field_8(skyBoxManager), field_16(0) {
        new ((field_20 + 4)) eastl::vector<ViewportMapEntry>();
    }

    // 0x10091fb80
    void ViewportMapManager::Initialise() {
        CreateRenderingResources();
        return 1;
    }

    // 0x10091fb90
    void ViewportMapManager::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10;

        return 1;
    }

    // 0x10091fbc0
    void ViewportMapManager::Destroy() {
        DestroyRenderingResources();
    }

    // 0x10091fbd0
    void ViewportMapManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        ((field_20 + 4))->clear();
    }

    // 0x10091fd50
    void ViewportMapManager::Update() {
        auto arg3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        Layout* this_00 = (Layout*)(field_20 + 4);
        auto pVVar1 = this_00->HeapBeginPtr();
        auto pVVar2 = this_00->end();
        pVVar1 = std::remove_if<ViewportMapEntry*, ViewportMapManager::Update()::__11>(pVVar1, pVVar2, arg3);
        pVVar2 = (ViewportMapEntry*)this_00->end();
        this_00->erase(pVVar1, pVVar2);
    }

    // 0x10091feb0
    void ViewportMapManager::SetTextureMode(TextureMode textureMode) {
        uint8_t* this_00;
        MapArea* pMVar2;
        RenderDeviceCaps* this_01;
        long lVar3;
        unsigned int arg1;
        Singleton<render::RenderDevice>* pSVar4;

        if (field_16 != textureMode) {
            field_16 = textureMode;
            this_00 = field_20;
            pSVar4 = (Singleton<render::RenderDevice>*)this_00;
            new (this_00) callstack::Callstack();
            pMVar2 = (MapArea*)pSVar4->Instance();
            this_01 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            if ((this_01->GetCompressedTextures() == '\0') || (field_16 == 2)) {
                arg1 = 5;
            } else {
                pMVar2 = (MapArea*)this_01->Instance();
                lVar3 = pMVar2->GetOrigin();
                if (*(char*)(lVar3 + 161) == '\0') {
                    pMVar2 = (MapArea*)pMVar2->Instance();
                    lVar3 = pMVar2->GetOrigin();
                    if (*(char*)(lVar3 + 162) == '\0') {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/effects/viewportmap/ViewportMapManager.cpp",
                                        146, nullptr);
                    }
                    arg1 = 2;
                } else {
                    arg1 = 1;
                }
            }
            pSVar4 = (Singleton<render::RenderDevice>*)this_00;
            this_00->AddFormatType(arg1);
            pMVar2 = (MapArea*)pSVar4->Instance();
            lVar3 = pMVar2->GetOrigin();
            if (*(char*)(lVar3 + 147) != '\0') {
                this_00->AddFormatType(7);
            }
            DestroyRenderingResources();
            CreateRenderingResources();
        }
    }

    // 0x100929140
    uint32_t
    ViewportMapManager::RegisterViewportMapID(int)::$_9::operator()(const ViewportMapEntry& viewportMapEntry) const {
        return viewportMapEntry.field_0 == field_0;
    }

    // 0x1009292a0
    uint32_t ViewportMapManager::GetViewportMapTexture(int) const ::$_10::operator()(
        const ViewportMapEntry& viewportMapEntry) const {
        return viewportMapEntry.field_0 == *(int*)this;
    }

    // 0x100929300
    uint64_t ViewportMapManager::Update()::$_11::operator()(ViewportMapEntry& viewportMapEntry) const {
        unsigned long uVar1 = field_0 - viewportMapEntry.field_24;
        return 10000 < uVar1;
    }

} // namespace jag::graphics
