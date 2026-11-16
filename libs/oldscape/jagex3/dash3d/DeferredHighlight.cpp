// libs/oldscape/jagex3/dash3d/DeferredHighlight.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "DeferredHighlight.h"

namespace jag::oldscape::dash3d {
    // 0x100009e70: DeferredHighlight::Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DeferredHighlight::~DeferredHighlight() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10034abf0
    void DeferredModelHighlight::Render(world& world, NXTWorldRenderer* nxtWorldRenderer,
                                        ModelLitRenderer<NXTPix3D>* modelLitRenderer, int arg4, int arg5, int arg6,
                                        int arg7, int arg8) {
        ModelSource* pMVar5 = field_8;
        int iVar1 = field_16;
        int iVar2 = field_20;
        int iVar3 = field_24;
        int iVar4 = field_28;
        long long lVar6 = field_32;
        uint64_t uVar7 = field_40->GetModelOverlayProperties();
        uint32_t local_38 = (uint32_t)uVar7;
        uint16_t local_34 = (uint16_t)((unsigned long)uVar7 >> 32);
        (**(void (**)(...))(*(long*)modelLitRenderer + 16))(modelLitRenderer, pMVar5, iVar1, arg4, arg5, arg6, arg7,
                                                            iVar2, iVar3, iVar4, lVar6, arg8, &local_38, 1);
    }

    // 0x10034ace0
    void DeferredGroundGridHighlight::Render(world& world, NXTWorldRenderer* nxtWorldRenderer,
                                             ModelLitRenderer<NXTPix3D>* modelLitRenderer, int arg4, int arg5, int arg6,
                                             int arg7, int arg8) {
        int arg2 = field_8;
        int arg7_00 = *(int*)&field_12;
        int arg8_00 = field_16;
        int arg9 = *(int*)&field_20;
        int arg10 = field_24;
        bool arg11 = (bool)field_32->ShowInsideEdges();
        unsigned short uVar2 = field_32->GetTileOutlineWidth();
        unsigned short uVar3 = field_32->GetEntityID();
        uint8_t bVar1 = field_32->GetTileTintAlpha();
        nxtWorldRenderer->RenderGroundOverlayGrid(world, arg2, arg4, arg5, arg6, arg7, arg7_00, arg8_00, arg9, arg10,
                                                  arg11, (unsigned int)uVar2, (unsigned int)uVar3, (unsigned int)bVar1);
    }

} // namespace jag::oldscape::dash3d
