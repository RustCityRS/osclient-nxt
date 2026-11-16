// libs/oldscape/jagex3/dash3d/DeferredHighlight.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "DeferredHighlight.h"

namespace jag::oldscape::dash3d {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DeferredHighlight::Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DeferredHighlight::~DeferredHighlight();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    DeferredHighlight::~DeferredHighlight();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (Client::*)(), Client*&>, std::allocator<std::__bind<void (Client::*)(), Client*&> >, void (ClientWindowMode)>::~__func(), which has identical code
    DeferredHighlight::~DeferredHighlight();

    // 0x10034abf0, 160 bytes, placed by debug map only (low confidence)
    // DeferredModelHighlight::Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int)
    void DeferredModelHighlight::Render(world* param_1, NXTWorldRenderer* param_2, ModelLitRenderer* param_3,
                                        int param_4, int param_5, int param_6, int param_7, int param_8) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        ModelSource* pMVar5;
        longlong lVar6;
        undefined8 uVar7;
        undefined4 local_38;
        undefined2 local_34;

        pMVar5 = field_8;
        iVar1 = field_16;
        iVar2 = field_20;
        iVar3 = field_24;
        iVar4 = field_28;
        lVar6 = field_32;
        uVar7 = field_40->GetModelOverlayProperties();
        local_38 = (undefined4)uVar7;
        local_34 = (undefined2)((ulong)uVar7 >> 32);
        (**(code**)(*(long*)param_3 + 16))(param_3, pMVar5, iVar1, param_4, param_5, param_6, param_7, iVar2, iVar3,
                                           iVar4, lVar6, param_8, &local_38, 1);
    }

    // 0x10034ace0, 208 bytes, placed by debug map only (low confidence)
    // DeferredGroundGridHighlight::Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int)
    void DeferredGroundGridHighlight::Render(world* param_1, NXTWorldRenderer* param_2, ModelLitRenderer* param_3,
                                             int param_4, int param_5, int param_6, int param_7, int param_8) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        bool bVar6;
        byte bVar7;
        ushort uVar8;
        ushort uVar9;

        iVar1 = field_8;
        iVar2 = *(int*)&field_12;
        iVar3 = field_16;
        iVar4 = field_20;
        iVar5 = field_24;
        bVar6 = (bool)field_32->ShowInsideEdges();
        uVar8 = field_32->GetTileOutlineWidth();
        uVar9 = field_32->GetEntityID();
        bVar7 = field_32->GetTileTintAlpha();
        param_2->RenderGroundOverlayGrid(param_1, iVar1, param_4, param_5, param_6, param_7, iVar2, iVar3, iVar4, iVar5,
                                         bVar6, (uint)uVar8, (uint)uVar9, (uint)bVar7);
    }

} // namespace jag::oldscape::dash3d
