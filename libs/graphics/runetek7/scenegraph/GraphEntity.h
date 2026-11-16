// libs/graphics/runetek7/scenegraph/GraphEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::graphics {
    class GraphEntity : public RenderPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GraphEntity();
        virtual OccludesView() const;
        virtual IsVisibleEntity() const;
        virtual CreateRenderingResources();
        virtual GetLoadImportance() const;
        virtual GetLoadProgress() const;
        DestroyRenderingResources();
        MarkAsNoLongerAtTargetLOD();
        TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, int) const;
        LineIntersectionSupport() const;
        GraphEntity();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class GraphEntityTransformData {
    public:
        GraphEntityTransformData(math::Matrix44T<float> const*);
        GraphEntityTransformData* operator=(GraphEntityTransformData&&);
        GraphEntityTransformData(math::Matrix44T<float> const*, math::Frustum const&);

        // data members, from how the methods use this: 120 bytes
        Matrix44T* field_0; // offset 0
        char _unknown_8[8];
        Frustum field_16; // offset 16
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GraphEntity::CreateRenderingResources();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GraphEntity::DestroyRenderingResources();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GraphEntity::MarkAsNoLongerAtTargetLOD();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GraphEntity::~GraphEntity();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    GraphEntity::OccludesView() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    GraphEntity::TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, int) const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    GraphEntity::LineIntersectionSupport() const;

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    GraphEntity::~GraphEntity();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    GraphEntity::IsVisibleEntity() const;

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    GraphEntity::~GraphEntity();

    // 0x10014d2f0: the linker folded this into oldscape::ApplicationContext::GetScreenRatio(), which has identical code
    GraphEntity::GetLoadImportance() const;

    // 0x1001d1770, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // GraphEntity::GraphEntity()
    void GraphEntity::GraphEntity() {
        field_0 = PTR_vtable_100ee8728 + 16;
    }

    // 0x1001d20c0, 16 bytes, inline, placed by class name
    // GraphEntity::GetLoadProgress() const
    undefined8 GraphEntity::GetLoadProgress() {
        return 1065353216;
    }

    // 0x1001f2cb0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // GraphEntityTransformData::GraphEntityTransformData(math::Matrix44T<float> const*): jumps straight to the base-object constructor

    // 0x1001f2cc0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // GraphEntityTransformData::GraphEntityTransformData(math::Matrix44T<float> const*)
    void GraphEntityTransformData::GraphEntityTransformData(Matrix44T* param_1) {
        field_0 = param_1;
        new (field_16) math::Frustum();
    }

    // 0x1007afcd0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // GraphEntityTransformData::GraphEntityTransformData(math::Matrix44T<float> const*, math::Frustum const&): jumps straight to the base-object constructor

} // namespace jag::graphics
