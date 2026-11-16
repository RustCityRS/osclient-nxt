// libs/graphics/runetek7/scenegraph/GraphEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::graphics {
    class GraphEntity : public RenderPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GraphEntity();
        virtual uint64_t OccludesView() const;
        virtual bool IsVisibleEntity() const;
        virtual void CreateRenderingResources();
        virtual uint64_t GetLoadImportance() const;
        virtual uint64_t GetLoadProgress() const;
        void DestroyRenderingResources();
        void MarkAsNoLongerAtTargetLOD();
        uint64_t TestIntersection(const math::Vector3T<float>& arg1, const math::Vector3T<float>& arg2, int arg3) const;
        uint64_t LineIntersectionSupport() const;
        GraphEntity();
    };

    class GraphEntityTransformData {
    public:
        GraphEntityTransformData(const math::Matrix44T<float>* matrix44);
        GraphEntityTransformData* operator=(GraphEntityTransformData&& graphEntityTransformData);
        GraphEntityTransformData(const math::Matrix44T<float>* matrix44, const math::Frustum& frustum);

    private:
        Matrix44T<float>* field_0;
        uint8_t _unknown_8[8];
        Frustum field_16;
    };

    // 0x100009e70: GraphEntity::CreateRenderingResources() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: GraphEntity::DestroyRenderingResources() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: GraphEntity::MarkAsNoLongerAtTargetLOD() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: GraphEntity::~GraphEntity() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: GraphEntity::OccludesView() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: GraphEntity::TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, int) const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: GraphEntity::LineIntersectionSupport() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: GraphEntity::IsVisibleEntity() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10014d2f0: GraphEntity::GetLoadImportance() const has the same machine code as oldscape::ApplicationContext::GetScreenRatio()

    // 0x1001d1770
    GraphEntity::GraphEntity() {}

    // 0x1001d20c0
    uint64_t GraphEntity::GetLoadProgress() const {
        return 1065353216;
    }

    // 0x1001f2cc0
    GraphEntityTransformData::GraphEntityTransformData(const math::Matrix44T<float>* matrix44) : field_0(matrix44) {}

} // namespace jag::graphics
