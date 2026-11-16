// libs/graphics/runetek7/model/billboards/BillboardType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class BillboardType {
    public:
        void Initialise(unsigned int arg1, const BillboardRaw& billboardRaw);
        BillboardType();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        unsigned int field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint32_t field_16;
        uint8_t _unknown_20[4];
        uint8_t* field_24;
        uint8_t* field_32;
        uint8_t field_40;
        uint8_t field_41;
        uint8_t _unknown_42[7];
    };

    // 0x10084b830
    BillboardType::BillboardType() : field_0(0), field_8(4294967295), field_12(64), field_16(64) {
        field_24 = BlendMode::MULTIPLY;
        field_32 = BlendMode::NORMAL;
        field_40 = 0;
        field_41 = 0;
    }

    // 0x100850910
    ParticleData::ParticleData(ParticleData&& particleData)
        : eastl::vector<float, SafeBucketAllocatorEASTL>(particleData), field_24(particleData.field_24),
          field_48(particleData.field_48), field_72(particleData.field_72), field_96(particleData.field_96),
          field_120(particleData.field_120), field_144(particleData.field_144), field_168(particleData.field_168),
          field_192(particleData.field_192), field_216(particleData.field_216), field_240(particleData.field_240) {}

    // 0x100850e40
    bool ModularParticleSystemDrawable::UpdateMaterials(MaterialManager const&, TextureAtlasManager&)::$_9::operator()(
        const Material* material) const {
        return material->GetZ() == *(int*)this;
    }

    // 0x1008519c0
    ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy<
        math::Vector3T<float> const&, float&>(const math::Vector3T<float>& vector3, float& arg2) {
        uint8_t local_18[12];

        local_18._8_4_ = *(uint32_t*)(vector3 + 8);
        local_18._0_8_ = *(uint64_t*)vector3;
        float local_c = arg2;
        ParticleVertexDataProxy(this, (PositionTimeData*)local_18);
    }

} // namespace jag::graphics

namespace jag {
    // 0x10084d1e0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(
                                          unsigned char const*, render::Format)::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(64, 4, 8);
    }

    // 0x10084d4b0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(
                                          unsigned char const*, render::Format)::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func << 6), arg2);
    }

    // 0x10084e600
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                                      graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                                      graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                         graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                         graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(184, 4, 8);
    }

    // 0x10084e8b0
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                                      graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                                      graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                           graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                           graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 184), arg2);
    }

} // namespace jag
