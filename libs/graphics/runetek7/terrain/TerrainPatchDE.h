// libs/graphics/runetek7/terrain/TerrainPatchDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TerrainPatch_DE {
    public:
        // virtual methods in vtable order
        virtual ~TerrainPatch_DE();
        virtual void Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&);
        virtual void GetRenderer(RT7Core&);
        TerrainPatch_DE(TerrainPatch const&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
                        math::OBB const&, float, render::InputAssemblerState*, render::RenderPipelineState*);

        // data members, from how the methods use this: 13992 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        TerrainPatch field_112; // offset 112
    };

    // 0x1007c5df0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TerrainPatch_DE::TerrainPatch_DE(TerrainPatch const&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB const&, float, render::InputAssemblerState*, render::RenderPipelineState*): jumps straight to the base-object constructor

    // 0x1007c5e60, 256 bytes, base-object constructor, inline, placed by class name and debug map
    // TerrainPatch_DE::TerrainPatch_DE(TerrainPatch const&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB const&, float, render::InputAssemblerState*, render::RenderPipelineState*)
    void TerrainPatch_DE::TerrainPatch_DE(TerrainPatch* param_1, fixed_vector* param_2, OBB* param_3, float param_4,
                                          InputAssemblerState* param_5, RenderPipelineState* param_6) {
        DrawCallState* this_00;
        uint uVar1;
        undefined4 uVar2;

        uVar1 = param_1->GetPos();
        new (this) DrawableElementPool<TerrainPatch_DE>(param_3, uVar1, param_4);
        field_0 = PTR_vtable_100ee8788 + 16;
        field_112->GetWorldTransform();
        uVar2 = param_1->GetFade();
        *(undefined4*)(field_112 + 64) = uVar2;
        *(TerrainPatch**)(field_112 + 72) = param_1;
        this_00 = (DrawCallState*)(field_112 + 80);
        render::DrawCallState::DrawCallState(this_00);
        new ((field_112 + 128), param_2) eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>();
        ApplyPrecisionOffset((Matrix44T*)field_112);
        this_00->SetInputAssemblerState(param_5);
        this_00->SetRenderPipelineState(param_6);
    }

    // 0x1007c5f60, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementPool<TerrainPatch_DE>::DrawableElementPool(math::OBB const&, unsigned int, float)
    void DrawableElementPool<TerrainPatch_DE>::DrawableElementPool(OBB* param_1, uint param_2, float param_3) {
        new (this) DrawableElement(param_1, param_2, param_3);
        *(undefined**)this = PTR_vtable_100ee87e0 + 16;
    }

    // 0x1007c6010, 16 bytes, complete-object destructor, inline, placed by class name
    // TerrainPatch_DE::~TerrainPatch_DE(): jumps straight to the base-object destructor

    // 0x1007c6020, 32 bytes, deleting destructor, inline, placed by class name
    // TerrainPatch_DE::~TerrainPatch_DE()
    void TerrainPatch_DE::~TerrainPatch_DE() {
        ~TerrainPatch_DE(this);
        operator_delete(this);
    }

    // 0x1007c6090, 96 bytes, inline, placed by class name
    // TerrainPatch_DE::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void TerrainPatch_DE::Render(RT7Core* param_1, undefined8 param_2, undefined8 param_3, undefined4 param_5,
                                 undefined8 param_6) {
        TerrainPatchRenderer* pTVar1;
        undefined8 uVar2;

        pTVar1 = (TerrainPatchRenderer*)param_1->GetTerrainPatchRenderer();
        uVar2 = param_1->GetRenderContext();
        pTVar1->Render(this, uVar2, param_2, param_3, param_5, param_6);
    }

    // 0x1007c60f0, 16 bytes, inline, placed by class name
    // TerrainPatch_DE::GetRenderer(RT7Core&)
    void TerrainPatch_DE::GetRenderer(RT7Core* param_1) {
        param_1->GetTerrainPatchRenderer();
    }

    // 0x1007c6450, 64 bytes, base-object destructor, inline, placed by class name
    // TerrainPatch_DE::~TerrainPatch_DE()
    void TerrainPatch_DE::~TerrainPatch_DE() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = PTR_vtable_100ee8788 + 16;
        ((field_112 + 128))->~fixed_vector();
        ((field_112 + 80))->~DrawCallState();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics
