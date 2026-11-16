// libs/hal/render/resources/RenderResource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class RenderResource {
    public:
        RenderResource();
        void DisableMarkAsDead(RenderResourceLivenessMethod);
        ~RenderResource();
        void UndoMarkAsDead() const;
        void MarkAsDead() const;
        bool IsMarkAsDeadEnabled() const;
        RenderResource(RenderResource&&);
        RenderResource* operator=(RenderResource&&);

        // data members, from how the methods use this: 5 bytes
        int field_0;        // offset 0
        undefined1 field_4; // offset 4
    };

    // 0x100be8710, 16 bytes, inline, placed by class name
    // RenderResource::IsMarkAsDeadEnabled() const
    bool RenderResource::IsMarkAsDeadEnabled() {
        return field_0 == 1;
    }

    // 0x100c13110, 32 bytes, base-object constructor, inline, placed by class name
    // RenderResource::RenderResource(RenderResource&&)
    void RenderResource::RenderResource(RenderResource* param_1) {
        field_0 = 1;
        field_4 = 0;
        field_0 = param_1->field_0;
        MarkAsDead(param_1);
    }

    // 0x100c13260, 32 bytes, inline, placed by class name
    // RenderResource::operator=(RenderResource&&)
    /* RenderResource::TEMPNAMEPLACEHOLDERVALUE(RenderResource&&) */

    RenderResource* RenderResource::operator=(RenderResource* param_1) {
        field_0 = param_1->field_0;
        MarkAsDead(param_1);
        return this;
    }

} // namespace jag::render
