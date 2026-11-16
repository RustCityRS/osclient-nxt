// libs/oldscape/osrendercore/rseven/entities/Entity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "Entity.h"

namespace jag::oldscape::rseven {
    // 0x100fc91d8, set at startup by ___cxx_global_var_init.135
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> Entity::NullEntity =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009e70: Entity::GatherDrawableElements(jag::graphics::DrawableQueue&, jag::graphics::RT7Core&, jag::math::Matrix44T<float> const&, jag::graphics::SceneViewData const&, jag::graphics::EffectManager const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Entity::Destruct() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1001d1730
    Entity::Entity(jag::graphics::GraphNode* graphNode, EntityType entityType) : jag::graphics::GraphEntity() {
        field_8.unique_ptr<true, void>(graphNode);
        field_16 = entityType;
    }

    // 0x1001d17b0
    Entity::~Entity() {
        uint8_t* this_00 = &field_8;
        if (this_00->operator_cast_to_bool() != '\0') {
            ((GraphNode*)(*this_00).operator->())->Detach();
        }
        this_00->~unique_ptr();
    }

} // namespace jag::oldscape::rseven
