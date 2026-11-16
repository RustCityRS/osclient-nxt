// libs/graphics/runetek7/model/billboards/BillboardType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class BillboardType {
    public:
        void Initialise(unsigned int, BillboardRaw const&);
        BillboardType();

        // data members, from how the methods use this: 49 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        uint field_4;        // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        char _unknown_20[4];
        undefined* field_24; // offset 24
        undefined* field_32; // offset 32
        undefined1 field_40; // offset 40
        undefined1 field_41; // offset 41
        char _unknown_42[7];
    };

    // 0x10084b820, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BillboardType::BillboardType(): jumps straight to the base-object constructor

    // 0x10084b830, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // BillboardType::BillboardType()
    void BillboardType::BillboardType() {
        field_0 = 0;
        field_8 = 4294967295;
        field_12 = 64;
        field_16 = 64;
        field_24 = BlendMode::MULTIPLY;
        field_32 = BlendMode::NORMAL;
        field_40 = 0;
        field_41 = 0;
    }

    // 0x1008508f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleData::ParticleData(ParticleData&&): jumps straight to the base-object constructor

    // 0x100850910, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleData::ParticleData(ParticleData&&)
    void ParticleData::ParticleData(ParticleData* param_1) {
        new (this) eastl::vector<float, SafeBucketAllocatorEASTL>(param_1);
        new (&field_24, (vector*)&param_1->field_24) eastl::vector<float, SafeBucketAllocatorEASTL>();
        new (&field_48, (vector*)&param_1->field_48) eastl::vector<float, SafeBucketAllocatorEASTL>();
        new (&field_72, (vector*)&param_1->field_72) eastl::vector<float, SafeBucketAllocatorEASTL>();
        new (&field_96, (vector*)&param_1->field_96) eastl::vector<float, SafeBucketAllocatorEASTL>();
        new (&field_120, (vector*)&param_1->field_120)
            eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>();
        new (&field_144, (vector*)&param_1->field_144)
            eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>();
        new (&field_168, (vector*)&param_1->field_168)
            eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>();
        new (&field_192, (vector*)&param_1->field_192)
            eastl::vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                          SafeBucketAllocatorEASTL>();
        new (&field_216, (vector*)&param_1->field_216)
            eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>, SafeBucketAllocatorEASTL>();
        new (&field_240, (vector*)&param_1->field_240)
            eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>();
    }

    // 0x100850e40, 32 bytes, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::UpdateMaterials(MaterialManager const&, TextureAtlasManager&)::$_9::operator()(Material const*) const
    /* ModularParticleSystemDrawable::UpdateMaterials(MaterialManager
   const&,
   TextureAtlasManager&)::$_9::TEMPNAMEPLACEHOLDERVALUE(Material
   const*) const */

    bool ModularParticleSystemDrawable::UpdateMaterials(MaterialManager_const&,
                                                        TextureAtlasManager&)::$_9::operator()(Material* param_1) {
        return param_1->GetZ() == *(int*)this;
    }

    // 0x1008519c0, 48 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy<math::Vector3T<float> const&, float&>(math::Vector3T<float> const&, float&)
    void ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy<math::Vector3T<float> const&,
                                                                                          float&>(Vector3T* param_1,
                                                                                                  float* param_2) {
        undefined1 local_18[12];
        float local_c;

        local_18._8_4_ = *(undefined4*)(param_1 + 8);
        local_18._0_8_ = *(undefined8*)param_1;
        local_c = *param_2;
        ParticleVertexDataProxy(this, (PositionTimeData*)local_18);
    }

} // namespace jag::graphics

namespace jag {
    // 0x10084d1e0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned
   char const*, render::Format)::$_5>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned
   char const*, render::Format)::$_5>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(64, 4, 8);
    }

    // 0x10084d4b0, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned
   char const*, render::Format)::$_5>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned
   char const*, render::Format)::$_5>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 << 6);
    }

    // 0x10084e600, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
            graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&,
            graphics::SceneViewData_const&, bool, graphics::SceneViewData*)::$_6&>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(184, 4, 8);
    }

    // 0x10084e8b0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
            graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&,
            graphics::SceneViewData_const&, bool, graphics::SceneViewData*)::$_6&>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 184);
    }

} // namespace jag
