// libs/oldscape/osrendercore/rseven/entities/Entity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "Entity.h"

namespace jag::oldscape::rseven {
    // 0x100fc91d8, 16 bytes, __common; set at startup by ___cxx_global_var_init.135
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> Entity::NullEntity;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::GatherDrawableElements(jag::graphics::DrawableQueue&, jag::graphics::RT7Core&,
                                   jag::math::Matrix44T<float> const&, jag::graphics::SceneViewData const&,
                                   jag::graphics::EffectManager const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::Destruct();

    // 0x1001d1730, 64 bytes, base-object constructor, placed by class name and debug map
    // Entity::Entity(jag::graphics::GraphNode*, EntityType)
    void Entity::Entity(GraphNode* param_1, undefined4 param_3) {
        new (this) jag::graphics::GraphEntity();
        field_0 = &PTR__Entity_100ef6880;
        std::unique_ptr<jag::graphics::GraphNode, jag::graphics::GraphNodeDelete>::unique_ptr<true, void>(
            (unique_ptr<jag::graphics::GraphNode, jag::graphics::GraphNodeDelete>*)&field_8, param_1);
        field_16 = param_3;
    }

    // 0x1001d17a0, 16 bytes, complete-object constructor, placed by class name
    // Entity::Entity(jag::graphics::GraphNode*, EntityType): jumps straight to the base-object constructor

    // 0x1001d17b0, 112 bytes, base-object destructor, placed by class name
    // Entity::~Entity()
    void Entity::~Entity() {
        undefined1* this_00;
        GraphNode* this_01;

        field_0 = &PTR__Entity_100ef6880;
        this_00 = &field_8;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (GraphNode*)std::unique_ptr<jag::graphics::GraphNode, jag::graphics::GraphNodeDelete>::operator->(
                (unique_ptr<jag::graphics::GraphNode, jag::graphics::GraphNodeDelete>*)this_00);
            this_01->Detach();
        }
        this_00->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1001d1860, 16 bytes, complete-object destructor, placed by class name
    // Entity::~Entity(): jumps straight to the base-object destructor

    // 0x1001d1870, 32 bytes, deleting destructor, placed by class name
    // Entity::~Entity()
    void Entity::~Entity() {
        ~Entity(this);
        operator_delete(this);
    }

    // 0x1001f4370, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.135
    void ___cxx_global_var_init_135(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Entity::NullEntity) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5510, &Entity::NullEntity, 4294967296);
    }

} // namespace jag::oldscape::rseven
