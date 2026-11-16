// libs/graphics/runetek7/renderer/RenderPassEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "RenderPassEffect.h"

namespace jag::graphics {
    // 0x10019c120: the linker folded this into eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage> >::~rbtree_node(), which has identical code
    RenderPassEffect::~RenderPassEffect();

    // 0x10019c130: the linker folded this into eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage> >::~rbtree_node(), which has identical code
    RenderPassEffect::~RenderPassEffect();

    // 0x1006d6ac0: the linker folded this into ui::SpriteData::SpriteData(ui::SpriteData&&), which has identical code
    RenderPassEffect::RenderPassEffect(RenderPassEffect&&);

    // 0x1006d6ad0: the linker folded this into ui::SpriteData::SpriteData(ui::SpriteData&&), which has identical code
    RenderPassEffect::RenderPassEffect(RenderPassEffect&&);

    // 0x1007d0a00, 176 bytes, placed by class name and debug map
    // RenderPassEffect::UpdateShader(EffectManager const&, ShaderManager&, ShaderType, render::VertexDeclaration const&, RenderPassType, unsigned char)
    void RenderPassEffect::UpdateShader(EffectManager* param_1, ShaderManager* param_2, undefined4 param_4,
                                        undefined8 param_5, undefined4 param_6, undefined1 param_7) {
        undefined1* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        EffectList* this_02;
        shared_ptr* psVar1;
        Shader* this_03;
        bool bVar2;
        char cVar3;

        this_00 = field_32;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            this_01 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                     eastl::allocator, 0>*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)this_00);
            this_02 = (EffectList*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_01);
            cVar3 = EffectList::operator!=(this_02, (EffectList*)&field_16);
            if (cVar3 == '\0')
                goto LAB_1007d0a83;
        }
        psVar1 = (shared_ptr*)param_2->GetShader(param_4, param_1, &field_16, param_5, param_7, param_6);
        shared_ptr<Shader>::operator=((shared_ptr<Shader>*)this_00, psVar1);
    LAB_1007d0a83:
        this_03 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)this_00);
        this_03->PreRender(param_1);
    }

    // 0x1007d4d60, 80 bytes, placed by class name
    // RenderPassEffect::GetShader(SceneViewData const&) const
    undefined1* RenderPassEffect::GetShader(SceneViewData* param_1) {
        Shader* this_00;
        undefined1* this_01;

        this_01 = field_32;
        if (this_01->operator_cast_to_bool()) {
            if (param_1->UseAsyncRenderingResources() == '\0') {
                this_00 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)this_01);
                this_00->WaitForAsyncCompile();
            }
        }
        return this_01;
    }

    // 0x1007e4050, 48 bytes, placed by class name
    // RenderPassEffect::Clear()
    void RenderPassEffect::Clear() {
        Clear();
        (&field_16)->Clear();
        shared_ptr<Shader>::reset();
    }

} // namespace jag::graphics
