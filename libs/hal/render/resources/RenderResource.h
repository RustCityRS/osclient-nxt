// libs/hal/render/resources/RenderResource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class RenderResource {
    public:
        RenderResource();
        void DisableMarkAsDead(RenderResourceLivenessMethod renderResourceLivenessMethod);
        ~RenderResource();
        void UndoMarkAsDead() const;
        void MarkAsDead() const;
        bool IsMarkAsDeadEnabled() const;
        RenderResource(RenderResource&& renderResource);
        RenderResource* operator=(RenderResource&& renderResource);

    private:
        RenderResourceLivenessMethod field_0;
        uint8_t field_4;
    };

    // 0x100be8710
    bool RenderResource::IsMarkAsDeadEnabled() const {
        return field_0 == 1;
    }

    // 0x100c13110
    RenderResource::RenderResource(RenderResource&& renderResource)
        : field_0(1), field_4(0), field_0(renderResource.field_0) {
        MarkAsDead(renderResource);
    }

    // 0x100c13260
    RenderResource* RenderResource::operator=(RenderResource&& renderResource) {
        field_0 = renderResource.field_0;
        MarkAsDead(renderResource);
        return this;
    }

} // namespace jag::render
