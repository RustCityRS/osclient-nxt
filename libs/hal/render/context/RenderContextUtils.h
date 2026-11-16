// libs/hal/render/context/RenderContextUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    // 0x100c05fa0
    WrapArray<math::Matrix44T<float> const>
    AllocateScratchArrayAndCopy<math::Matrix44T<float>>(RenderContext& renderContext,
                                                        const math::Matrix44T<float>* matrix44, unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_48;
        Particle* local_40;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (matrix44->ShouldDefer() != '\0') {
                local_48 = matrix44->AllocateScratch(in_RCX * 64, 16);
                if (local_40 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<math::Matrix44T<float> const*, math::Matrix44T<float>*>(arg3, (in_RCX * 64 + arg3),
                                                                                    local_40);
                new (renderContext) WrapArray(local_40, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c062f0
    WrapArray<math::Matrix33T<float> const>
    AllocateScratchArrayAndCopy<math::Matrix33T<float>>(RenderContext& renderContext,
                                                        const math::Matrix33T<float>* matrix33, unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_40;
        Particle* local_38;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (matrix33->ShouldDefer() != '\0') {
                local_40 = matrix33->AllocateScratch(in_RCX * 36, 16);
                if (local_38 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<math::Matrix33T<float> const*, math::Matrix33T<float>*>(arg3, (arg3 + in_RCX * 36),
                                                                                    local_38);
                new (renderContext) WrapArray(local_38, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c06640
    WrapArray<math::Matrix22T<float> const>
    AllocateScratchArrayAndCopy<math::Matrix22T<float>>(RenderContext& renderContext,
                                                        const math::Matrix22T<float>* matrix22, unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_48;
        Particle* local_40;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (matrix22->ShouldDefer() != '\0') {
                local_48 = matrix22->AllocateScratch(in_RCX * 16, 16);
                if (local_40 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<math::Matrix22T<float> const*, math::Matrix22T<float>*>(arg3, (in_RCX * 16 + arg3),
                                                                                    local_40);
                new (renderContext) WrapArray(local_40, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c069e0
    WrapArray<float const> AllocateScratchArrayAndCopy<float>(RenderContext& renderContext, const float* arg2,
                                                              unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_40;
        Particle* local_38;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (arg2->ShouldDefer() != '\0') {
                local_40 = arg2->AllocateScratch(in_RCX * 4, 16);
                if (local_38 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<char*, char*>(arg3, (arg3 + in_RCX * 4), local_38);
                new (renderContext) WrapArray(local_38, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c06c30
    WrapArray<unsigned int const> AllocateScratchArrayAndCopy<unsigned int>(RenderContext& renderContext,
                                                                            const unsigned int* arg2,
                                                                            unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_40;
        Particle* local_38;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (arg2->ShouldDefer() != '\0') {
                local_40 = arg2->AllocateScratch(in_RCX * 4, 16);
                if (local_38 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<char*, char*>(arg3, (arg3 + in_RCX * 4), local_38);
                new (renderContext) WrapArray(local_38, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c07de0
    WrapArray<math::Vector4T<float> const>
    AllocateScratchArrayAndCopy<math::Vector4T<float>>(RenderContext& renderContext,
                                                       const math::Vector4T<float>* vector4, unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_48;
        Particle* local_40;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (vector4->ShouldDefer() != '\0') {
                local_48 = vector4->AllocateScratch(in_RCX * 16, 16);
                if (local_40 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<math::Vector4T<float> const*, math::Vector4T<float>*>(arg3, (in_RCX * 16 + arg3), local_40);
                new (renderContext) WrapArray(local_40, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c08040
    WrapArray<math::Vector3T<float> const>
    AllocateScratchArrayAndCopy<math::Vector3T<float>>(RenderContext& renderContext,
                                                       const math::Vector3T<float>* vector3, unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_40;
        Particle* local_38;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (vector3->ShouldDefer() != '\0') {
                local_40 = vector3->AllocateScratch(in_RCX * 12, 16);
                if (local_38 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<math::Vector3T<float> const*, math::Vector3T<float>*>(arg3, (arg3 + in_RCX * 12), local_38);
                new (renderContext) WrapArray(local_38, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c083a0
    WrapArray<math::Vector2T<float> const>
    AllocateScratchArrayAndCopy<math::Vector2T<float>>(RenderContext& renderContext,
                                                       const math::Vector2T<float>* vector2, unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_40;
        Particle* local_38;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (vector2->ShouldDefer() != '\0') {
                local_40 = vector2->AllocateScratch(in_RCX * 8, 16);
                if (local_38 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<math::Vector2T<float> const*, math::Vector2T<float>*>(arg3, (arg3 + in_RCX * 8), local_38);
                new (renderContext) WrapArray(local_38, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c1e6d0
    WrapArray<Viewport const> AllocateScratchArrayAndCopy<Viewport>(RenderContext& renderContext,
                                                                    const Viewport* viewport, unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_40;
        Particle* local_38;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (viewport->ShouldDefer() != '\0') {
                local_40 = viewport->AllocateScratch(in_RCX * 24, 16);
                if (local_38 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<char*, char*>(arg3, (arg3 + in_RCX * 24), local_38);
                new (renderContext) WrapArray(local_38, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c22000
    WrapArray<int const> AllocateScratchArrayAndCopy<int>(RenderContext& renderContext, const int* arg2,
                                                          unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_40;
        Particle* local_38;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (arg2->ShouldDefer() != '\0') {
                local_40 = arg2->AllocateScratch(in_RCX * 4, 16);
                if (local_38 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<char*, char*>(arg3, (arg3 + in_RCX * 4), local_38);
                new (renderContext) WrapArray(local_38, in_RCX);
            }
        }
        return renderContext;
    }

    // 0x100c226b0
    WrapArray<void const* const> AllocateScratchArrayAndCopy<void const*>(RenderContext& renderContext,
                                                                          void const* const* arg2, unsigned long arg3) {
        unsigned long in_RCX;
        ReturnValue local_40;
        Particle* local_38;

        new (renderContext) WrapArray(arg3, in_RCX);
        if ((arg3 != 0) && (in_RCX != 0)) {
            if (arg2->ShouldDefer() != '\0') {
                local_40 = arg2->AllocateScratch(in_RCX * 8, 16);
                if (local_38 == nullptr) {
                    LogAssert("scratchMem.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContextUtils.h",
                              35, nullptr);
                }
                eastl::copy<char*, char*>(arg3, (arg3 + in_RCX * 8), local_38);
                new (renderContext) WrapArray(local_38, in_RCX);
            }
        }
        return renderContext;
    }

} // namespace jag::render
