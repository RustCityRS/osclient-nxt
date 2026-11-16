// libs/hal/render/state/OGL/RenderPipelineState_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/state/RenderPipelineState.h"

namespace jag::render {
    // 0x100bc5fd0, 144 bytes, placed by class name and debug map
    // RenderPipelineState::Clear()
    void RenderPipelineState::Clear() {
        long lVar1;

        lVar1 = Instance();
        field_0 = lVar1 + 1524;
        lVar1 = ((RenderPipelineState*)this)->Instance();
        field_8 = lVar1 + 720;
        lVar1 = ((RenderPipelineState*)this)->Instance();
        m_pRasteriserState = (RasteriserState*)(lVar1 + 1200);
        m_pShaderProgram = (ShaderProgram*)0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x100bc6060, 208 bytes, placed by class name and debug map
    // RenderPipelineState::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool)
    void RenderPipelineState::SetVSTextureSamplerPair(uint param_1, Texture* param_2, uint param_3,
                                                      SamplerState* param_4, bool param_5) {
        ShaderTextureSamplerData* pSVar1;
        ShaderTextureSamplerData* pSVar2;
        undefined1* this_00;
        ShaderTextureSamplerData local_68;
        Texture* local_48;
        SamplerState* local_40;
        uint local_34;
        uint local_30;
        bool local_29;

        this_00 = &field_256;
        local_48 = param_2;
        local_40 = param_4;
        local_34 = param_1;
        local_30 = param_3;
        local_29 = param_5;
        pSVar1 = (ShaderTextureSamplerData*)this_00->HeapBeginPtr();
        pSVar2 = (ShaderTextureSamplerData*)this_00->end();
        new (&local_68) ShaderTextureSamplerData(local_34, local_48, local_30, local_40, local_29);
        pSVar1 = std::find<ShaderTextureSamplerData_const*, ShaderTextureSamplerData>(pSVar1, pSVar2, &local_68);
        pSVar2 = (ShaderTextureSamplerData*)this_00->end();
        if (pSVar1 != pSVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            40, "Attempting to add duplicate entry to RenderPipelineState");
        }
        eastl::vector<ShaderTextureSamplerData,
                      eastl::fixed_vector_allocator<32ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, Texture_const*&, unsigned int&, SamplerState_const*&, bool&>(
                (vector<ShaderTextureSamplerData,
                        eastl::fixed_vector_allocator<32ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                &local_34, &local_48, &local_30, &local_40, &local_29);
    }

    // 0x100bc6280, 160 bytes, placed by class name and debug map
    // RenderPipelineState::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void RenderPipelineState::SetVSShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        pair* ppVar1;
        pair* ppVar2;
        undefined1* this_00;
        pair<unsigned int, game::VarDomainType*> local_48[16];
        ShaderConstBuffer* local_38;
        uint local_2c;

        this_00 = &field_32;
        local_38 = param_2;
        local_2c = param_1;
        ppVar1 = (pair*)this_00->HeapBeginPtr();
        ppVar2 = (pair*)this_00->end();
        eastl::pair<unsigned int, game::VarDomainType*>::pair<unsigned int&, game::VarDomainType*, void>(
            local_48, &local_2c, (VarDomainType**)&local_38);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderConstBuffer_const*> const*,
                           eastl::pair<unsigned int, ShaderConstBuffer_const*>>(ppVar1, ppVar2, (pair*)local_48);
        ppVar2 = (pair*)this_00->end();
        if (ppVar1 != ppVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            52, "Attempting to add duplicate entry to RenderPipelineState");
        }
        eastl::vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>,
                      eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, ShaderConstBuffer_const*&>(
                (vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>,
                        eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                &local_2c, &local_38);
    }

    // 0x100bc6370, 176 bytes, placed by class name and debug map
    // RenderPipelineState::SetVSShaderStorageBuffer(unsigned int, ShaderStorageBuffer const*)
    void RenderPipelineState::SetVSShaderStorageBuffer(uint param_1, ShaderStorageBuffer* param_2) {
        pair* ppVar1;
        pair* ppVar2;
        undefined1* this_00;
        pair<unsigned int, game::VarDomainType*> local_48[16];
        ShaderStorageBuffer* local_38;
        uint local_2c;

        this_00 = &field_200;
        local_38 = param_2;
        local_2c = param_1;
        ppVar1 = (pair*)this_00->HeapBeginPtr();
        ppVar2 = (pair*)this_00->end();
        eastl::pair<unsigned int, game::VarDomainType*>::pair<unsigned int&, game::VarDomainType*, void>(
            local_48, &local_2c, (VarDomainType**)&local_38);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderStorageBuffer_const*> const*,
                           eastl::pair<unsigned int, ShaderStorageBuffer_const*>>(ppVar1, ppVar2, (pair*)local_48);
        ppVar2 = (pair*)this_00->end();
        if (ppVar1 != ppVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            64, "Attempting to add duplicate entry to RenderPipelineState");
        }
        eastl::vector<eastl::pair<unsigned int, ShaderStorageBuffer_const*>,
                      eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, ShaderStorageBuffer_const*&>(
                (vector<eastl::pair<unsigned int, ShaderStorageBuffer_const*>,
                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                &local_2c, &local_38);
    }

    // 0x100bc64f0, 32 bytes, placed by class name and debug map
    // RenderPipelineState::ClearVSTextureSamplerPairs()
    void RenderPipelineState::ClearVSTextureSamplerPairs() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x100bc6510, 208 bytes, placed by class name and debug map
    // RenderPipelineState::SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool)
    void RenderPipelineState::SetPSTextureSamplerPair(uint param_1, Texture* param_2, int param_3,
                                                      SamplerState* param_4, bool param_5) {
        ShaderTextureSamplerData* pSVar1;
        ShaderTextureSamplerData* pSVar2;
        undefined1* this_00;
        ShaderTextureSamplerData local_68;
        Texture* local_48;
        SamplerState* local_40;
        uint local_34;
        int local_30;
        bool local_29;

        this_00 = &field_552;
        local_48 = param_2;
        local_40 = param_4;
        local_34 = param_1;
        local_30 = param_3;
        local_29 = param_5;
        pSVar1 = (ShaderTextureSamplerData*)this_00->HeapBeginPtr();
        pSVar2 = (ShaderTextureSamplerData*)this_00->end();
        new (&local_68) ShaderTextureSamplerData(local_34, local_48, local_30, local_40, local_29);
        pSVar1 = std::find<ShaderTextureSamplerData_const*, ShaderTextureSamplerData>(pSVar1, pSVar2, &local_68);
        pSVar2 = (ShaderTextureSamplerData*)this_00->end();
        if (pSVar1 != pSVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            86, "Attempting to add duplicate entry to RenderPipelineState");
        }
        eastl::vector<ShaderTextureSamplerData,
                      eastl::fixed_vector_allocator<32ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, Texture_const*&, int&, SamplerState_const*&, bool&>(
                (vector<ShaderTextureSamplerData,
                        eastl::fixed_vector_allocator<32ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                &local_34, &local_48, &local_30, &local_40, &local_29);
    }

    // 0x100bc66e0, 176 bytes, placed by class name and debug map
    // RenderPipelineState::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void RenderPipelineState::SetPSShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        pair* ppVar1;
        pair* ppVar2;
        undefined1* this_00;
        pair<unsigned int, game::VarDomainType*> local_48[16];
        ShaderConstBuffer* local_38;
        uint local_2c;

        this_00 = &field_328;
        local_38 = param_2;
        local_2c = param_1;
        ppVar1 = (pair*)this_00->HeapBeginPtr();
        ppVar2 = (pair*)this_00->end();
        eastl::pair<unsigned int, game::VarDomainType*>::pair<unsigned int&, game::VarDomainType*, void>(
            local_48, &local_2c, (VarDomainType**)&local_38);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderConstBuffer_const*> const*,
                           eastl::pair<unsigned int, ShaderConstBuffer_const*>>(ppVar1, ppVar2, (pair*)local_48);
        ppVar2 = (pair*)this_00->end();
        if (ppVar1 != ppVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            98, "Attempting to add duplicate entry to RenderPipelineState");
        }
        eastl::vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>,
                      eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, ShaderConstBuffer_const*&>(
                (vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>,
                        eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                &local_2c, &local_38);
    }

    // 0x100bc6790, 176 bytes, placed by class name and debug map
    // RenderPipelineState::SetPSShaderStorageBuffer(unsigned int, ShaderStorageBuffer const*)
    void RenderPipelineState::SetPSShaderStorageBuffer(uint param_1, ShaderStorageBuffer* param_2) {
        pair* ppVar1;
        pair* ppVar2;
        undefined1* this_00;
        pair<unsigned int, game::VarDomainType*> local_48[16];
        ShaderStorageBuffer* local_38;
        uint local_2c;

        this_00 = &field_496;
        local_38 = param_2;
        local_2c = param_1;
        ppVar1 = (pair*)this_00->HeapBeginPtr();
        ppVar2 = (pair*)this_00->end();
        eastl::pair<unsigned int, game::VarDomainType*>::pair<unsigned int&, game::VarDomainType*, void>(
            local_48, &local_2c, (VarDomainType**)&local_38);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderStorageBuffer_const*> const*,
                           eastl::pair<unsigned int, ShaderStorageBuffer_const*>>(ppVar1, ppVar2, (pair*)local_48);
        ppVar2 = (pair*)this_00->end();
        if (ppVar1 != ppVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            110, "Attempting to add duplicate entry to RenderPipelineState");
        }
        eastl::vector<eastl::pair<unsigned int, ShaderStorageBuffer_const*>,
                      eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, ShaderStorageBuffer_const*&>(
                (vector<eastl::pair<unsigned int, ShaderStorageBuffer_const*>,
                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                &local_2c, &local_38);
    }

    // 0x100bc6840, 32 bytes, placed by class name and debug map
    // RenderPipelineState::ClearPSTextureSamplerPairs()
    void RenderPipelineState::ClearPSTextureSamplerPairs() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x100bc6860, 160 bytes, placed by class name and debug map
    // RenderPipelineState::operator==(RenderPipelineState const&) const
    /* RenderPipelineState::TEMPNAMEPLACEHOLDERVALUE(RenderPipelineState
   const&) const */

    bool RenderPipelineState::operator==(RenderPipelineState* param_1) {
        bool bVar1;

        if ((((field_0 == param_1->field_0) && (field_8 == param_1->field_8)) &&
             (m_pRasteriserState == param_1->m_pRasteriserState)) &&
            (((m_pShaderProgram == param_1->m_pShaderProgram &&
               (bVar1 = eastl::operator==((vector*)&field_32, (vector*)&param_1->field_32), bVar1)) &&
              ((bVar1 = eastl::operator==((vector*)&field_256, (vector*)&param_1->field_256),
                bVar1 && (bVar1 = eastl::operator==((vector*)&field_328, (vector*)&param_1->field_328), bVar1)))))) {
            bVar1 = eastl::operator==((vector*)&field_552, (vector*)&param_1->field_552);
            return bVar1;
        }
        return false;
    }

} // namespace jag::render
