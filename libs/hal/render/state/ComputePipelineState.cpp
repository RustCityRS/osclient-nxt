// libs/hal/render/state/ComputePipelineState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "ComputePipelineState.h"

namespace jag::render {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ComputePipelineState::GetCSConstBuffers() const;

    // 0x10036bfe0: the linker folded this into graphics::GeometryBatch::GetJointIDMap(), which has identical code
    ComputePipelineState::GetCSTextureSamplerPairs() const;

    // 0x100441a50: the linker folded this into game::MapEnvironmentSettings::GetSkySettings() const, which has identical code
    ComputePipelineState::GetCSTextureImages() const;

    // 0x100bf3a60, 64 bytes, placed by class name and debug map
    // ComputePipelineState::Clear()
    void ComputePipelineState::Clear() {
        m_pShaderProgram = (ShaderProgram*)0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x100bf3aa0, 208 bytes, placed by class name and debug map
    // ComputePipelineState::SetCSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool)
    void ComputePipelineState::SetCSTextureSamplerPair(uint param_1, Texture* param_2, uint param_3,
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

        this_00 = &field_168;
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
                            "ComputePipelineState.cpp",
                            33, "Attempting to add duplicate entry to ComputePipelineState");
        }
        eastl::vector<ShaderTextureSamplerData,
                      eastl::fixed_vector_allocator<32ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, Texture_const*&, unsigned int&, SamplerState_const*&, bool&>(
                (vector<ShaderTextureSamplerData,
                        eastl::fixed_vector_allocator<32ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                &local_34, &local_48, &local_30, &local_40, &local_29);
    }

    // 0x100bf3cd0, 176 bytes, placed by class name
    // ComputePipelineState::SetCSTextureImage(unsigned int, Texture const*, Access)
    void ComputePipelineState::SetCSTextureImage(uint param_1, Texture* param_2, undefined4 param_4) {
        ShaderTextureImageData* pSVar1;
        ShaderTextureImageData* pSVar2;
        undefined1* this_00;
        undefined1 local_48[16];
        Texture* local_38;
        uint local_30;
        undefined4 local_2c;

        this_00 = &field_464;
        local_38 = param_2;
        local_30 = param_1;
        local_2c = param_4;
        pSVar1 = (ShaderTextureImageData*)this_00->HeapBeginPtr();
        pSVar2 = (ShaderTextureImageData*)this_00->end();
        new (local_48) ShaderTextureImageData(local_30, local_38, local_2c);
        pSVar1 = std::find<ShaderTextureImageData_const*, ShaderTextureImageData>(pSVar1, pSVar2,
                                                                                  (ShaderTextureImageData*)local_48);
        pSVar2 = (ShaderTextureImageData*)this_00->end();
        if (pSVar1 != pSVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "ComputePipelineState.cpp",
                            45, "Attempting to add duplicate entry to ComputePipelineState");
        }
        eastl::vector<ShaderTextureImageData,
                      eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, Texture_const*&, Access&>(
                (vector<ShaderTextureImageData,
                        eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                &local_30, &local_38, (Access*)&local_2c);
    }

    // 0x100bf3e90, 160 bytes, placed by class name
    // ComputePipelineState::SetCSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void ComputePipelineState::SetCSShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        pair* ppVar1;
        pair* ppVar2;
        pair<unsigned int, game::VarDomainType*> local_50[16];
        ShaderConstBuffer* local_40;
        uint local_34;

        local_40 = param_2;
        local_34 = param_1;
        ppVar1 = (pair*)HeapBeginPtr();
        ppVar2 = (pair*)end();
        eastl::pair<unsigned int, game::VarDomainType*>::pair<unsigned int&, game::VarDomainType*, void>(
            local_50, &local_34, (VarDomainType**)&local_40);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderConstBuffer_const*> const*,
                           eastl::pair<unsigned int, ShaderConstBuffer_const*>>(ppVar1, ppVar2, (pair*)local_50);
        ppVar2 = (pair*)end();
        if (ppVar1 != ppVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "ComputePipelineState.cpp",
                            57, "Attempting to add duplicate entry to ComputePipelineState");
        }
        eastl::vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>,
                      eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, ShaderConstBuffer_const*&>(
                (vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>,
                        eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                &local_34, &local_40);
    }

    // 0x100bf4000, 32 bytes, placed by class name
    // ComputePipelineState::ClearCSTextureSamplerPairs()
    void ComputePipelineState::ClearCSTextureSamplerPairs() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x100bf4020, 32 bytes, placed by class name
    // ComputePipelineState::ClearCSTextureImages()
    void ComputePipelineState::ClearCSTextureImages() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x100bf4040, 96 bytes, placed by class name
    // ComputePipelineState::operator==(ComputePipelineState const&) const
    /* ComputePipelineState::TEMPNAMEPLACEHOLDERVALUE(ComputePipelineState
   const&) const */

    bool ComputePipelineState::operator==(ComputePipelineState* param_1) {
        bool bVar1;

        if (((m_pShaderProgram == param_1->m_pShaderProgram) &&
             (bVar1 = eastl::operator==((vector*)this, (vector*)param_1), bVar1)) &&
            (bVar1 = eastl::operator==((vector*)&field_168, (vector*)&param_1->field_168), bVar1)) {
            bVar1 = eastl::operator==((vector*)&field_464, (vector*)&param_1->field_464);
            return bVar1;
        }
        return false;
    }

} // namespace jag::render
