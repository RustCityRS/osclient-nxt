// libs/graphics/runetek7/renderer/RenderPassEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "RenderPassEffect.h"

namespace jag::graphics {
    // 0x10019c120: RenderPassEffect::~RenderPassEffect() has the same machine code as eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage>>::~rbtree_node()

    // 0x10019c130: RenderPassEffect::~RenderPassEffect() has the same machine code as eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage>>::~rbtree_node()

    // 0x1006d6ad0: RenderPassEffect::RenderPassEffect(RenderPassEffect&&) has the same machine code as ui::SpriteData::SpriteData(ui::SpriteData&&)

    // 0x1007d0a00
    void RenderPassEffect::UpdateShader(const EffectManager& effectManager, ShaderManager& shaderManager,
                                        ShaderType shaderType, const render::VertexDeclaration& vertexDeclaration,
                                        RenderPassType renderPassType, unsigned char arg6) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00;
        EffectList* this_01;
        uint8_t in_stack_00000008;

        uint64_t* uint64_t = &effectManager.field_32;
        bool cVar1 = uint64_t->operator_cast_to_bool();
        if (cVar1) {
            this_00 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*uint64_t).operator->();
            this_01 = (EffectList*)this_00->second();
            cVar1 = *this_01 != effectManager.field_16;
            if (!cVar1)
                goto LAB_1007d0a83;
        }
        auto shader = ShaderManager::GetShader(
            shaderType, *((EffectManager*)((unsigned long)vertexDeclaration & 4294967295)), shaderManager,
            effectManager.field_16, (unsigned char)renderPassType, (unsigned int)in_stack_00000008);
        *uint64_t = *shader;
    LAB_1007d0a83:
        ((Shader*)(*uint64_t).operator->())->PreRender(shaderManager);
    }

    // 0x1007d4d60
    uint8_t* RenderPassEffect::GetShader(const SceneViewData& sceneViewData) const {
        uint8_t* this_01 = field_32;
        if (this_01->operator_cast_to_bool()) {
            if (!(sceneViewData.UseAsyncRenderingResources())) {
                ((Shader*)(*this_01).operator->())->WaitForAsyncCompile();
            }
        }
        return this_01;
    }

    // 0x1007e4050
    void RenderPassEffect::Clear() {
        Clear();
        field_16.Clear();
        field_32->reset();
    }

} // namespace jag::graphics
