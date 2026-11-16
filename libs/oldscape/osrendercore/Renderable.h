// libs/oldscape/osrendercore/Renderable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class Renderable {
    public:
        class Storage;
        Vector2T<int>* GetTriangle();
        Vector2T<int>* GetUISceneSettings();
        Vector2T<int>* GetModel();
        Renderable* Render(TriangleVertexData* triangleVertexData, unsigned int arg2, RenderState& renderState,
                           eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>,
                                                 eastl::equal_to<int>, false>& fixed_hash_map,
                           unsigned int arg5) const;
        Renderable(RenderableType arg1);
        Renderable(Renderable&& renderable);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[15];
        UISceneSettings field_16;
        uint8_t _unknown_40[8];
        int field_48;
        uint8_t _unknown_52[4];
    };

    class Renderable::Storage {
    public:
        Storage();
        Storage(const Storage& storage);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint32_t field_64;
        uint8_t _unknown_68[4];
    };

    class RenderableOutput {
    public:
        RenderableOutput* operator=(RenderableOutput&& renderableOutput);
        int GetTotalVertCount() const;
        RenderableOutput(RenderableMode renderableMode, unsigned int arg2);
        RenderableOutput(RenderableOutput&& renderableOutput);

    private:
        char field_0;
        uint8_t field_1[3];
        unsigned int field_4;
        int field_8;
        int field_12;
        UISceneSettings field_16;
        uint8_t _unknown_40[8];
        Callstack field_48;
    };

    class RenderableOverlay {
    public:
        RenderableOverlay();
    };

    class TriangleRenderable {
    public:
        TriangleRenderable* Render(TriangleVertexData* triangleVertexData, unsigned int arg2, RenderState& renderState,
                                   eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>,
                                                         eastl::equal_to<int>, false>& fixed_hash_map,
                                   unsigned int arg5) const;

        uint8_t _unknown_0[1];
    };

    // 0x1001c0540
    Renderable* Renderable::Render(TriangleVertexData* triangleVertexData, unsigned int arg2, RenderState& renderState,
                                   eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>,
                                                         eastl::equal_to<int>, false>& fixed_hash_map,
                                   unsigned int arg5) const {
        int local_1c;

        TriangleVertexData TVar1 = *triangleVertexData;
        if (TVar1 == (TriangleVertexData)2) {
            new (this) RenderableOutput(5, 0);
            *field_16 = (*((triangleVertexData + 4)));
            local_1c = 0;
            new (&local_1c) callstack::Callstack();
            field_48 = local_1c;
        } else if (TVar1 == (TriangleVertexData)1) {
            Render(triangleVertexData + 4, arg2, renderState, fixed_hash_map, arg5);
        } else {
            if (TVar1 != (TriangleVertexData)0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "osrendercore/Renderable.h",
                                136, nullptr);
            }
            Render(triangleVertexData + 4, arg2, renderState, fixed_hash_map, arg5);
        }
        return this;
    }

    // 0x1001c0720
    RenderableOutput* RenderableOutput::operator=(RenderableOutput&& renderableOutput) {
        uint32_t uVar1 = renderableOutput.field_1;
        unsigned int uVar2 = renderableOutput.field_4;
        int iVar3 = renderableOutput.field_8;
        int iVar4 = renderableOutput.field_12;
        field_0 = renderableOutput.field_0;
        field_1 = uVar1;
        field_4 = uVar2;
        field_8 = iVar3;
        field_12 = iVar4;
        *field_16 = renderableOutput.field_16;
        *(uint32_t*)field_48 = *(uint32_t*)renderableOutput.field_48;
        return this;
    }

    // 0x1001c07d0
    int RenderableOutput::GetTotalVertCount() const {
        return field_8 + field_4 + field_12;
    }

    // 0x1001e0540
    Renderable::Renderable(RenderableType arg1) : field_0(param_2) {
        (&field_4)->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1001e07a0
    Renderable::Renderable(Renderable&& renderable) : field_0(renderable.field_0), field_4(renderable.field_4) {}

    // 0x1001e07d0
    Renderable::Storage::Storage(const Renderable::Storage& storage) : field_64(storage.field_64) {
        uint64_t uVar1 = storage.field_0;
        uint64_t uVar2 = storage.field_8;
        uint64_t uVar3 = storage.field_16;
        uint64_t uVar4 = storage.field_24;
        uint64_t uVar5 = storage.field_32;
        uint64_t uVar6 = storage.field_40;
        uint64_t uVar7 = storage.field_56;
        field_48 = storage.field_48;
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
    }

} // namespace jag

namespace jag::game {
    // 0x100102c80: GamepadEvent::GamepadEvent() has the same machine code as RenderableOverlay::RenderableOverlay()

} // namespace jag::game
