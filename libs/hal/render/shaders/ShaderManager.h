// libs/hal/render/shaders/ShaderManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    template <typename...> // 3 instantiations, e.g. <ComputeShader>, <PixelShader>, <VertexShader>
    class ShaderManager {
    public:
        void GetShaderCount();
        auto RegisterFromSourceString(unsigned long arg1, const char* str, unsigned char arg3);
        auto RegisterFromBinary(const ShaderSource& shaderSource, unsigned long arg2);
        void Unregister(unsigned long arg1, shared_ptr<ComputeShader>& computeShader);
        void Unregister(unsigned long arg1, shared_ptr<PixelShader>& pixelShader);
        void Unregister(unsigned long arg1, shared_ptr<VertexShader>& vertexShader);
        ShaderManager(unsigned int arg1);
        ~ShaderManager();
    };

    // 0x1008a9190
    void ShaderManager<VertexShader>::GetShaderCount() {
        size();
    }

    // 0x100bef500
    auto ShaderManager<VertexShader>::RegisterFromSourceString(unsigned long arg1, const char* str,
                                                               unsigned char arg3) {
        VertexShader* pVVar2;
        ResourceList<unsigned long, VertexShader, eastl::vector_map<unsigned long, shared_ptr<VertexShader>>> local_50;
        shared_ptr<VertexShader> local_48;

        ResourceList<unsigned long, VertexShader,
                     eastl::vector_map<unsigned long, shared_ptr<VertexShader>>>::AddResource<>(&local_50,
                                                                                                (unsigned long*)this);
        if (local_50[0] ==
            (ResourceList<unsigned long, VertexShader, eastl::vector_map<unsigned long, shared_ptr<VertexShader>>>)0) {
            pVVar2 = (VertexShader*)local_48.operator->();
            if (!(pVVar2->PrepareForReuse(str, arg3))) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderManager.h",
                          49, "Failed to prepare shader for sharing/re-use");
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/ShaderManager.h",
                                50, nullptr);
            }
        } else {
            pVVar2 = (VertexShader*)local_48.operator->();
            if (!(pVVar2->CreateFromSourceString(str, arg3))) {
                EraseResource(arg1);
            }
        }
        auto result(&local_48);
        return result;
    }

    // 0x100bef6c0
    auto ShaderManager<PixelShader>::RegisterFromSourceString(unsigned long arg1, const char* str, unsigned char arg3) {
        PixelShader* pPVar2;
        ResourceList<unsigned long, PixelShader, eastl::vector_map<unsigned long, shared_ptr<PixelShader>>> local_50;
        shared_ptr<PixelShader> local_48;

        ResourceList<unsigned long, PixelShader,
                     eastl::vector_map<unsigned long, shared_ptr<PixelShader>>>::AddResource<>(&local_50,
                                                                                               (unsigned long*)this);
        if (local_50[0] ==
            (ResourceList<unsigned long, PixelShader, eastl::vector_map<unsigned long, shared_ptr<PixelShader>>>)0) {
            pPVar2 = (PixelShader*)local_48.operator->();
            if (!(pPVar2->PrepareForReuse(str, arg3))) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderManager.h",
                          49, "Failed to prepare shader for sharing/re-use");
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/ShaderManager.h",
                                50, nullptr);
            }
        } else {
            pPVar2 = (PixelShader*)local_48.operator->();
            if (!(pPVar2->CreateFromSourceString(str, arg3))) {
                EraseResource(arg1);
            }
        }
        auto result(&local_48);
        return result;
    }

    // 0x100bef880
    auto ShaderManager<ComputeShader>::RegisterFromSourceString(unsigned long arg1, const char* str,
                                                                unsigned char arg3) {
        ComputeShader* pCVar2;
        ResourceList<unsigned long, ComputeShader, eastl::vector_map<unsigned long, shared_ptr<ComputeShader>>>
            local_50;
        shared_ptr<ComputeShader> local_48;

        ResourceList<unsigned long, ComputeShader,
                     eastl::vector_map<unsigned long, shared_ptr<ComputeShader>>>::AddResource<>(&local_50,
                                                                                                 (unsigned long*)this);
        if (local_50[0] == (ResourceList<unsigned long, ComputeShader,
                                         eastl::vector_map<unsigned long, shared_ptr<ComputeShader>>>)0) {
            pCVar2 = (ComputeShader*)local_48.operator->();
            if (!(pCVar2->PrepareForReuse(str, arg3))) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderManager.h",
                          49, "Failed to prepare shader for sharing/re-use");
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/ShaderManager.h",
                                50, nullptr);
            }
        } else {
            pCVar2 = (ComputeShader*)local_48.operator->();
            if (!(pCVar2->CreateFromSourceString(str, arg3))) {
                EraseResource(arg1);
            }
        }
        auto result(&local_48);
        return result;
    }

    // 0x100bf0130
    auto ShaderManager<VertexShader>::RegisterFromBinary(const ShaderSource& shaderSource, unsigned long arg2) {
        ResourceList<unsigned long, VertexShader, eastl::vector_map<unsigned long, shared_ptr<VertexShader>>> local_50;
        shared_ptr<VertexShader> local_48;

        unsigned long local_38 = shaderSource.capacity();
        ResourceList<unsigned long, VertexShader,
                     eastl::vector_map<unsigned long, shared_ptr<VertexShader>>>::AddResource<>(&local_50,
                                                                                                (unsigned long*)this);
        if (local_50[0] ==
            (ResourceList<unsigned long, VertexShader, eastl::vector_map<unsigned long, shared_ptr<VertexShader>>>)0) {
            ((Shader*)local_48.operator->())->WaitForAsyncCompile();
        } else {
            if (((VertexShader*)local_48.operator->())->CreateFromBinary(arg2) == '\0') {
                local_38 = shaderSource.capacity();
                EraseResource(local_38);
            }
        }
        auto result(&local_48);
        return result;
    }

    // 0x100bf0200
    auto ShaderManager<PixelShader>::RegisterFromBinary(const ShaderSource& shaderSource, unsigned long arg2) {
        ResourceList<unsigned long, PixelShader, eastl::vector_map<unsigned long, shared_ptr<PixelShader>>> local_50;
        shared_ptr<PixelShader> local_48;

        unsigned long local_38 = shaderSource.capacity();
        ResourceList<unsigned long, PixelShader,
                     eastl::vector_map<unsigned long, shared_ptr<PixelShader>>>::AddResource<>(&local_50,
                                                                                               (unsigned long*)this);
        if (local_50[0] ==
            (ResourceList<unsigned long, PixelShader, eastl::vector_map<unsigned long, shared_ptr<PixelShader>>>)0) {
            ((Shader*)local_48.operator->())->WaitForAsyncCompile();
        } else {
            if (((PixelShader*)local_48.operator->())->CreateFromBinary(arg2) == '\0') {
                local_38 = shaderSource.capacity();
                EraseResource(local_38);
            }
        }
        auto result(&local_48);
        return result;
    }

    // 0x100bf1030
    void ShaderManager<ComputeShader>::Unregister(unsigned long arg1, shared_ptr<ComputeShader>& computeShader) {
        if (computeShader.operator_cast_to_bool() != '\0') {
            ReleaseResource(arg1, computeShader);
        }
    }

    // 0x100bf1070
    void ShaderManager<PixelShader>::Unregister(unsigned long arg1, shared_ptr<PixelShader>& pixelShader) {
        if (pixelShader.operator_cast_to_bool() != '\0') {
            ReleaseResource(arg1, pixelShader);
        }
    }

    // 0x100bf10b0
    void ShaderManager<VertexShader>::Unregister(unsigned long arg1, shared_ptr<VertexShader>& vertexShader) {
        if (vertexShader.operator_cast_to_bool() != '\0') {
            ReleaseResource(arg1, vertexShader);
        }
    }

    // 0x100c37dd0
    ShaderManager<VertexShader>::ShaderManager(unsigned int arg1)
        : Singleton<ShaderManager<VertexShader>>(),
          ResourceList<unsigned long, VertexShader, eastl::vector_map<unsigned long, shared_ptr<VertexShader>>>(arg1) {}

    // 0x100c37f20
    ShaderManager<VertexShader>::~ShaderManager() {}

    // 0x100c38300
    ShaderManager<PixelShader>::ShaderManager(unsigned int arg1)
        : Singleton<ShaderManager<PixelShader>>(),
          ResourceList<unsigned long, PixelShader, eastl::vector_map<unsigned long, shared_ptr<PixelShader>>>(arg1) {}

    // 0x100c38450
    ShaderManager<PixelShader>::~ShaderManager() {}

    // 0x100c38830
    ShaderManager<ComputeShader>::ShaderManager(unsigned int arg1)
        : Singleton<ShaderManager<ComputeShader>>(),
          ResourceList<unsigned long, ComputeShader, eastl::vector_map<unsigned long, shared_ptr<ComputeShader>>>(
              arg1) {}

    // 0x100c38980
    ShaderManager<ComputeShader>::~ShaderManager() {}

} // namespace jag::render
