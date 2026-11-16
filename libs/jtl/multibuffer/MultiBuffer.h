// libs/jtl/multibuffer/MultiBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::fixedfunction {
    template <
        typename...> // 7 instantiations, e.g. <bool (unsigned int), 64ul, 16ul, (Methods)0>, <void (), 64ul, 16ul, (Methods)0>, <void (int, StringView), 64ul, 16ul, (Methods)0>
    class function {
    public:
        ~function();
        allocated() const;
        void destruct();
        function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
            oldscape::OSClientConsole::OnFocusChanged()::$_1&&);
        function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&);
        function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(
            oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&);
        function < oldscape::input::InputForm::SetText(eastl::string const&, int)::{
            lambda(BaseApp*) #1
        }
        , void > (oldscape::input::InputForm::SetText(eastl::string const&, int)::{ lambda(BaseApp*) #1 }&&);
        function < oldscape::input::InputForm::ShowKeyboard(int)::{
            lambda(BaseApp*) #1
        }
        , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&);
        function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(
            oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&);
        function < oldscape::input::InputForm::Close()::{
            lambda(BaseApp*) #1
        }
        , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&);
        function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&);
        void operator()<unsigned int&, game::CutscenePlaybackEndReason&>(unsigned int&,
                                                                         game::CutscenePlaybackEndReason&);
        function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&);
        function(function<void(), 64ul, 16ul, (Methods)0> const&);
        function<void(), 64ul, 16ul, (Methods)0>* operator=(function<void(), 64ul, 16ul, (Methods)0> const&);
        void clean();
        void copy(void*) const;
        function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
            ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&);
        function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(
            ui::InputField::AddCharacter(unsigned int, bool)::$_51&);
        function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
            ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&);
        function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
            ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&);
        function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
            ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&);
        function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                     graphics::RT7Core*)::$_4::operator()() const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()
                      const ::{ lambda(render::RenderContext&) #1 }&&);
        function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                     graphics::RT7Core*)::$_5::operator()() const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()
                      const ::{ lambda(render::RenderContext&) #1 }&&);
        function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                       eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
            lambda(BaseApp*) #1
        }
        , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                     eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
                      const ::{ lambda(BaseApp*) #1 }&&);
        function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                       graphics::EffectManager&, graphics::SceneViewData const&,
                                                       graphics::DrawableQueue&)::$_0,
                 void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                             graphics::EffectManager&, graphics::SceneViewData const&,
                                                             graphics::DrawableQueue&)::$_0&&);
        function<graphics::TerrainPatch::TerrainPatch(
                     int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
                     eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                     shared_ptr<graphics::TextureAtlasReference> const&,
                     eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                           eastl::equal_to<int>, false, eastl::allocator>&,
                     math::Matrix44T<float> const*, float const*)::$_8,
                 void>(graphics::TerrainPatch::TerrainPatch(
            int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
            eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
            shared_ptr<graphics::TextureAtlasReference> const&,
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&,
            math::Matrix44T<float> const*, float const*)::$_8&&);
        function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(
            graphics::Model::ConstructFinishAndUpload()::$_2&&);
        function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(
            graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&);
        function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
            graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&);
        function<graphics::TextureAtlas::GetTextureSlots(
                     eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
                     WrapArray<graphics::MaterialInfo const> const&)::$_5,
                 void>(graphics::TextureAtlas::GetTextureSlots(
            eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
            WrapArray<graphics::MaterialInfo const> const&)::$_5&&);
        function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
            graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&);
        function<
            graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
            void>(graphics::PointLightGridTexture::UpdateTexture(
            shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&);
        function<graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1,
                 void>(graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long,
                                                           unsigned long)::$_1&&);
        bool operator()<unsigned int&>(unsigned int&) const;
        function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
            graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&);
        function <
            DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&)
                      const ::{ lambda(render::RenderContext&) #1 }&&);
        function <
            DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&)
                      const ::{ lambda(render::RenderContext&) #1 }&&);
        function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
            graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&);
        void operator()<>();
        function<std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
            std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&);
        void operator()<GraphicsApp*>(GraphicsApp*&&);
        function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
            GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&);
        function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
            GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&);
        function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
            graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&);
        function<render::VAOManager::DestroyRenderingResources()::$_3, void>(
            render::VAOManager::DestroyRenderingResources()::$_3&&);
        function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&);
        function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           render::Format, void const*)::$_6,
                 void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                 render::Format, void const*)::$_6&&);
        function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           render::Format, void const*)::$_7,
                 void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                 render::Format, void const*)::$_7&&);
        function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           unsigned int, unsigned int, render::Format, void const*)::$_8,
                 void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                 unsigned int, unsigned int, render::Format, void const*)::$_8&&);
        function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, render::Format, void const*)::$_9,
                 void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int,
                                                   unsigned int, unsigned int, render::Format, void const*)::$_9&&);
        function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&);
        function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
            render::Texture::ReleaseNativeResources(char const*)::$_11&&);
        function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&);
        function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&);
        function<render::Query::Create(render::QueryType)::$_14, void>(
            render::Query::Create(render::QueryType)::$_14&&);
        function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&);
        function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&);
        function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&);
        function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&);
        function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&);
        function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&);
        function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&);
        function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                             render::Format, void const*)::$_6::operator()(BaseApp*) const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                            render::Format, void const*)::$_6::operator()(BaseApp*)
                      const ::{ lambda(render::RenderContext&) #1 }&&);
        function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&);
        function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(
            render::BufferedRenderTargets::WriteFinished()::$_3&&);
        function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
            render::RenderTargets::Create(char const*, unsigned int)::$_4&&);
        function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
            render::RenderTargets::Create(char const*, unsigned int)::$_5&&);
        function<render::RenderTargets::Create(char const*, render::TextureType,
                                               std::array<render::Texture::Desc, 2ul> const&, int,
                                               render::Texture::Desc const&, unsigned int)::$_6,
                 void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                     std::array<render::Texture::Desc, 2ul> const&, int,
                                                     render::Texture::Desc const&, unsigned int)::$_6&&);
        function<render::RenderTargets::Create(char const*, render::TextureType,
                                               std::array<render::Texture::Desc, 2ul> const&, int,
                                               render::Texture::Desc const&, unsigned int)::$_7,
                 void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                     std::array<render::Texture::Desc, 2ul> const&, int,
                                                     render::Texture::Desc const&, unsigned int)::$_7&&);
        function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
            render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&);
        function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
            render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&);
        function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
            render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&);
        function<render::RenderTargets::BindColourTargetTextures(
                     eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
                     render::CubeFace)::$_11,
                 void>(render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
            render::CubeFace)::$_11&&);
        function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
            render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&);
        function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&);
        function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
            render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&);
        function<render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate()
                                                                             const ::$_15&&);
        function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                              unsigned int) const ::$_17,
                 void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                                    unsigned int) const ::$_17&&);
        function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                              unsigned int) const ::$_18,
                 void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                                    unsigned int) const ::$_18&&);
        function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                              unsigned int) const ::$_19,
                 void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                                    unsigned int) const ::$_19&&);
        function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                     const ::$_20,
                 void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                           const ::$_20&&);
        function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                     const ::$_21,
                 void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
                                                                       unsigned int) const ::$_21&&);
        function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
            render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&);
        function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
            render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&);
        function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                     const ::$_24,
                 void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                           const ::$_24&&);
        function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
            render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&);
        function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
            render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&);
        function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
            render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&);
        function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
            render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&);
        function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                     const ::$_29,
                 void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
                                                                       unsigned int) const ::$_29&&);
        function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
            render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&);
        function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
            render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&);
        function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                              unsigned int) const ::$_32,
                 void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                                    unsigned int) const ::$_32&&);
        function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                     const ::$_33,
                 void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                           const ::$_33&&);
        function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                     const ::$_34,
                 void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                           const ::$_34&&);
        function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
            render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&);
        function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
            render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&);
        function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
            render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&);
        function<render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
            render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&);
        function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
            render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&);
        function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
            render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&);
        function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
            render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&);
        function<render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
            render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&);
        function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&);
        function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
            render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&);
        function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                       unsigned int, void const*, render::UpdateType)::$_1,
                 void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, void const*, render::UpdateType)::$_1&&);
        function<render::RenderContext::RunSynchronouslyOnRenderThread(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
                 void>(render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&);
        function<render::RenderContext::FinishRendering()::$_78, void>(
            render::RenderContext::FinishRendering()::$_78&&);
        function<render::RenderContext::FinishRendering()::$_79, void>(
            render::RenderContext::FinishRendering()::$_79&&);
        function<render::RenderContext::FinishRendering()::$_80, void>(
            render::RenderContext::FinishRendering()::$_80&&);
        function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&);
        function<render::RenderContext::ResetDeferredFrames()::$_94, void>(
            render::RenderContext::ResetDeferredFrames()::$_94&&);
        function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
            render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&);
        function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
            render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&);
        function(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&);
        function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
            render::RenderDevice::TriggerDeviceLoss()::$_114&&);
        function<render::RenderContext::BeginInternal(bool)::$_4, void>(
            render::RenderContext::BeginInternal(bool)::$_4&&);
        function<render::RenderContext::BeginInternal(bool)::$_5, void>(
            render::RenderContext::BeginInternal(bool)::$_5&&);
        function<render::RenderContext::BeginInternal(bool)::$_6, void>(
            render::RenderContext::BeginInternal(bool)::$_6&&);
        function<render::RenderContext::BeginInternal(bool)::$_7, void>(
            render::RenderContext::BeginInternal(bool)::$_7&&);
        function<render::RenderContext::BeginInternal(bool)::$_8, void>(
            render::RenderContext::BeginInternal(bool)::$_8&&);
        function<render::RenderContext::BeginInternal(bool)::$_9, void>(
            render::RenderContext::BeginInternal(bool)::$_9&&);
        function<render::RenderContext::BeginInternal(bool)::$_10, void>(
            render::RenderContext::BeginInternal(bool)::$_10&&);
        function<render::RenderContext::BeginInternal(bool)::$_11, void>(
            render::RenderContext::BeginInternal(bool)::$_11&&);
        function<render::RenderContext::EndInternal(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
                 void>(render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&);
        function<render::RenderContext::EndInternal(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
                 void>(render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&);
        function<render::RenderContext::EndInternal(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
                 void>(render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&);
        function<render::RenderContext::EndInternal(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
                 void>(render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&);
        function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&);
        function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&);
        function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
            render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&);
        function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
            render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&);
        function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
            render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&);
        function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
            render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&);
        function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
            render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&);
        function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
            render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&);
        function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
            render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&);
        function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
            render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&);
        function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
            render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&);
        function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
            render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&);
        function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
            render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&);
        function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
            render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&);
        function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
            render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&);
        function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
            render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&);
        function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
            render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&);
        function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
            render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&);
        function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                           unsigned long)::$_36,
                 void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                                 math::Vector4T<float> const*, unsigned long)::$_36&&);
        function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                           unsigned long)::$_37,
                 void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                                 math::Vector4T<float> const*, unsigned long)::$_37&&);
        function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
            render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&);
        function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
            render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&);
        function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                unsigned int)::$_40,
                 void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                      unsigned int)::$_40&&);
        function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                unsigned int)::$_41,
                 void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                      unsigned int)::$_41&&);
        function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
            render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&);
        function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
            render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&);
        function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                         unsigned int const*, unsigned int const*)::$_44,
                 void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                               unsigned int const*, unsigned int const*)::$_44&&);
        function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                         unsigned int const*, unsigned int const*)::$_45,
                 void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                               unsigned int const*, unsigned int const*)::$_45&&);
        function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46,
                 void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                              unsigned int)::$_46&&);
        function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47,
                 void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                              unsigned int)::$_47&&);
        function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
            render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&);
        function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
            render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&);
        function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
            render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&);
        function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
            render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&);
        function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                render::SamplerState const*, bool)::$_52,
                 void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*,
                                                                      unsigned int, render::SamplerState const*,
                                                                      bool)::$_52&&);
        function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                render::SamplerState const*, bool)::$_53,
                 void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*,
                                                                      unsigned int, render::SamplerState const*,
                                                                      bool)::$_53&&);
        function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                render::SamplerState const*, bool)::$_54,
                 void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                      render::SamplerState const*, bool)::$_54&&);
        function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                render::SamplerState const*, bool)::$_55,
                 void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                      render::SamplerState const*, bool)::$_55&&);
        function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56,
                 void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int,
                                                                     render::ShaderConstBuffer const*)::$_56&&);
        function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57,
                 void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int,
                                                                     render::ShaderConstBuffer const*)::$_57&&);
        function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58,
                 void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int,
                                                                     render::ShaderConstBuffer const*)::$_58&&);
        function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59,
                 void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int,
                                                                     render::ShaderConstBuffer const*)::$_59&&);
        function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
            render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&);
        function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
            render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&);
        function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
            render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&);
        function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
            render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&);
        function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
            render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&);
        function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
            render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&);
        function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
            render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&);
        function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
            render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&);
        function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                            int const*)::$_68,
                 void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                  int const*)::$_68&&);
        function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                            int const*)::$_69,
                 void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                  int const*)::$_69&&);
        function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                              render::IndexType)::$_70,
                 void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                                    render::IndexType)::$_70&&);
        function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                              render::IndexType)::$_71,
                 void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                                    render::IndexType)::$_71&&);
        function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                   void const* const*, render::IndexType)::$_72,
                 void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                         int const*, void const* const*,
                                                                         render::IndexType)::$_72&&);
        function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                   void const* const*, render::IndexType)::$_73,
                 void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                         int const*, void const* const*,
                                                                         render::IndexType)::$_73&&);
        function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
            render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&);
        function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
            render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&);
        function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
            render::RenderContext::MemoryBarrier(unsigned int)::$_76&&);
        function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
            render::RenderContext::MemoryBarrier(unsigned int)::$_77&&);
        function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, unsigned int, render::CubeFace)::$_81,
                 void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, unsigned int,
                                                                   render::CubeFace)::$_81&&);
        function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, unsigned int, render::CubeFace)::$_82,
                 void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, unsigned int,
                                                                   render::CubeFace)::$_82&&);
        function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                math::Rect<unsigned int> const&,
                                                                math::Rect<unsigned int> const&)::$_83,
                 void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                      math::Rect<unsigned int> const&,
                                                                      math::Rect<unsigned int> const&)::$_83&&);
        function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                math::Rect<unsigned int> const&,
                                                                math::Rect<unsigned int> const&)::$_84,
                 void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                      math::Rect<unsigned int> const&,
                                                                      math::Rect<unsigned int> const&)::$_84&&);
        function<render::RenderContext::FlushTextureCache()::$_85, void>(
            render::RenderContext::FlushTextureCache()::$_85&&);
        function<render::RenderContext::FlushTextureCache()::$_86, void>(
            render::RenderContext::FlushTextureCache()::$_86&&);
        function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
            render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&);
        function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
            render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&);
        function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
            render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&);
        function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
            render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&);
        function < render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
            lambda(BaseApp*) #1
        }
        , void > (render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)
                      const ::{ lambda(BaseApp*) #1 }&&);
        // ... 8 more instantiated members

        // data members, from how the methods use this: 160 bytes
        long field_0; // offset 0
        char _unknown_8[152];
    };

    // 0x10000b580, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::~function()
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::~function() */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::~function(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this) {
        if (operator_cast_to_bool()) {
            destruct(this);
        }
    }

    // 0x10000b5b0, 16 bytes, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::allocated() const
    /* function<void (unsigned int, game::CutscenePlaybackEndReason), 64ul,
   16ul, (Methods)0>::operator bool() const */

    bool function::operator_cast_to_bool() {
        return field_0 != 0;
    }

    // 0x10000b5c0, 32 bytes, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::destruct()
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::destruct() */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::destruct(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this) {
        (**(code**)(this + 152))(this + 16);
    }

    // 0x10007e1e0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&)
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::__1, void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __1* param_1) {
        *(undefined8*)this = 0;
        *(__1*)(this + 16) = *param_1;
        *(code**)(this + 144) = function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
            oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
            oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(code**)(this + 152) = function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
            oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100218a70, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::__0,
                                                                     void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __0* param_1) {
        *(undefined8*)this = 0;
        *(InputField**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(bool->SetFocus()::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(bool->SetFocus()::$_0&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(code**)(this + 152) =
            function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(bool->SetFocus()::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100396c10, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&): jumps straight to the base-object constructor

    // 0x100396c20, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::input::InputForm::Close()::_lambda(BaseApp*) _1_, void>(_lambda_jag__BaseApp___1_* param_1) {
        _func_void_void_ptr_void_ptr* p_Var1;
        _func_void_void_ptr_BaseApp_ptr* p_Var2;
        _func_void_void_ptr* p_Var3;
        _lambda_void__void___1_ local_28[8];
        _lambda_void__jag__BaseApp___1_ local_20[8];
        _lambda_void___1_ local_18[8];

        *(undefined8*)param_1 = 0;
        p_Var1 = fixedfunction::function::function(oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, void*) #1
        }
        ::operator_cast_to_function_pointer(local_28);
        *(_func_void_void_ptr_void_ptr**)(param_1 + 144) = p_Var1;
        p_Var2 = fixedfunction::function::function(oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator_cast_to_function_pointer(local_20);
        *(_func_void_void_ptr_BaseApp_ptr**)param_1 = p_Var2;
        p_Var3 = fixedfunction::function::function(oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*) #1
        }
        ::operator_cast_to_function_pointer(local_18);
        *(_func_void_void_ptr**)(param_1 + 152) = p_Var3;
    }

    // 0x1003a5e60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&): jumps straight to the base-object constructor

    // 0x100821a70, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&): jumps straight to the base-object constructor

    // 0x10085cec0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&): jumps straight to the base-object constructor

    // 0x10086ff90, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::__1, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __1* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        uVar2 = *(undefined8*)(param_1->field_12 + 4);
        uVar3 = *(undefined8*)(param_1->field_12 + 12);
        uVar4 = *(undefined8*)(param_1->field_12 + 20);
        uVar5 = *(undefined8*)(param_1->field_12 + 28);
        uVar6 = *(undefined8*)(param_1->field_12 + 36);
        uVar7 = *(undefined8*)(param_1->field_12 + 44);
        *(TextureAtlas**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(undefined8*)(this + 64) = uVar6;
        *(undefined8*)(this + 72) = uVar7;
        *(TextureAtlas**)(this + 80) = param_1[1].field_0;
        *(code**)(this + 144) = function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
            graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
            graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
            graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1008715a0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // function<void (graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5, void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5&&)
    void fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::GetTextureSlots(
            eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
            WrapArray<graphics::MaterialInfo_const> const&)::__5,
        void>(__5* param_1) {
        *(code**)(param_1 + 80) =
            function<graphics::TextureAtlas::GetTextureSlots(
                         eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
                         WrapArray<graphics::MaterialInfo_const> const&)::$_5,
                     void>((eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*)
                               ->GetTextureSlots(WrapArray<graphics::MaterialInfo_const> const&)::$_5&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)param_1 =
            function<graphics::TextureAtlas::GetTextureSlots(
                         eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
                         WrapArray<graphics::MaterialInfo_const> const&)::$_5,
                     void>((eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*)
                               ->GetTextureSlots(WrapArray<graphics::MaterialInfo_const> const&)::$_5&&)::{
            lambda(void*, graphicutils::TextureAtlasSlot_const&) #1
        }
        ::TextureAtlasSlot_const__;
        *(code**)(param_1 + 88) =
            function<graphics::TextureAtlas::GetTextureSlots(
                         eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
                         WrapArray<graphics::MaterialInfo_const> const&)::$_5,
                     void>((eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*)
                               ->GetTextureSlots(WrapArray<graphics::MaterialInfo_const> const&)::$_5&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100871650, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::__8, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __8* param_1) {
        *(undefined8*)this = 0;
        int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8::__8((__8*)(this + 16), (__8*)param_1);
        *(code**)(this + 144) =
            function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
                int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
                int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
                int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100954730, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (), 64ul, 16ul, (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&): jumps straight to the base-object constructor

    // 0x10098a650, 16 bytes, inline, placed by class header (inline)
    // void function<void (), 64ul, 16ul, (Methods)0>::operator()<>()
    /* void function<void (graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
   (Methods)0>::TEMPNAMEPLACEHOLDERVALUE(graphicutils::TextureAtlasSlot
   const&) const */

    void fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (Methods)0>::operator()(
        function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (Methods)0>* this,
        TextureAtlasSlot* param_1) {
        (**(code**)this)(this + 16);
    }

    // 0x100a452d0, 16 bytes, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void (tweak::Event const&)> const&, tweak::Event const&>&&)
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<std::__bind<std::function<void (tweak::Event
   const&)> const&, tweak::Event const&>, void>(std::__bind<std::function<void
   (tweak::Event const&)> const&, tweak::Event const&>&&) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __bind* param_1) {
        function<std::__bind<std::function<void(tweak::Event_const&)> const&, tweak::Event_const&>, void>(this,
                                                                                                          param_1);
    }

    // 0x100bbc420, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&): jumps straight to the base-object constructor

    // 0x100bc03b0, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::__0, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __0* param_1) {
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* puVar1;

        *(undefined8*)this = 0;
        puVar1 = param_1->field_8;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>**)(this + 24) = puVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) = function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
            int->ReadBackbuffer(int, int)::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
            int->ReadBackbuffer(int, int)::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
            int->ReadBackbuffer(int, int)::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bc7900, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3, void>(render::VAOManager::DestroyRenderingResources()::$_3&&): jumps straight to the base-object constructor

    // 0x100bc7d20, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&): jumps straight to the base-object constructor

    // 0x100bcb990, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6&&): jumps straight to the base-object constructor

    // 0x100bcb9c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7&&): jumps straight to the base-object constructor

    // 0x100bcc2b0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8&&): jumps straight to the base-object constructor

    // 0x100bccf20, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9&&): jumps straight to the base-object constructor

    // 0x100bcd9a0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&): jumps straight to the base-object constructor

    // 0x100be0880, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&): jumps straight to the base-object constructor

    // 0x100c1a8c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3, void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&): jumps straight to the base-object constructor

    // 0x100c231b0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&): jumps straight to the base-object constructor

    // 0x100c231d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&): jumps straight to the base-object constructor

    // 0x100c231e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&): jumps straight to the base-object constructor

    // 0x100c24de0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&): jumps straight to the base-object constructor

    // 0x100c25990, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&): jumps straight to the base-object constructor

    // 0x100c3f530, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3, void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::__3,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __3* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = *(undefined8*)(param_1 + 32);
        *(code**)(this + 144) =
            function<render::RenderContext::RunSynchronouslyOnRenderThread(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
                     void>((function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
                               ->RunSynchronouslyOnRenderThread(bool)::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::RunSynchronouslyOnRenderThread(
                                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
                                 void>((function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
                                           ->RunSynchronouslyOnRenderThread(bool)::$_3&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::RunSynchronouslyOnRenderThread(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
                     void>((function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
                               ->RunSynchronouslyOnRenderThread(bool)::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c3f580, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3, void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c3f590, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3, void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
   void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&,
   bool)::$_3&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c3f5b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3, void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c3f5c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3, void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
   void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&,
   bool)::$_3&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->RunSynchronouslyOnRenderThread(bool)::$_3::operator()(param_1, param_2);
    }

    // 0x100c3f670, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3, void>(render::RenderContext::RunSynchronouslyOnRenderThread(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c3ff80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&): jumps straight to the base-object constructor

    // 0x100c400e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::__4, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __4* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_4, void>(bool->BeginInternal()::$_4&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BeginInternal(bool)::$_4, void>(bool->BeginInternal()::$_4&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_4, void>(bool->BeginInternal()::$_4&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40120, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40130, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4,
   void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c40140, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40150, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4,
   void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->BeginInternal()::$_4::operator()(param_1, param_2);
    }

    // 0x100c40180, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c40190, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&): jumps straight to the base-object constructor

    // 0x100c402f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::__5, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __5* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_5, void>(bool->BeginInternal()::$_5&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BeginInternal(bool)::$_5, void>(bool->BeginInternal()::$_5&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_5, void>(bool->BeginInternal()::$_5&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40330, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40340, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5,
   void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c40350, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40360, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5,
   void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->BeginInternal()::$_5::operator()(param_1, param_2);
    }

    // 0x100c40390, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c403a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&): jumps straight to the base-object constructor

    // 0x100c40500, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::__6, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __6* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_6, void>(bool->BeginInternal()::$_6&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BeginInternal(bool)::$_6, void>(bool->BeginInternal()::$_6&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_6, void>(bool->BeginInternal()::$_6&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40540, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40550, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6,
   void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c40560, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40570, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6,
   void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->BeginInternal()::$_6::operator()(param_1, param_2);
    }

    // 0x100c405a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c405b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&): jumps straight to the base-object constructor

    // 0x100c40710, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::__7, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __7* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_7, void>(bool->BeginInternal()::$_7&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BeginInternal(bool)::$_7, void>(bool->BeginInternal()::$_7&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_7, void>(bool->BeginInternal()::$_7&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40750, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40760, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7,
   void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c40770, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40780, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7,
   void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->BeginInternal()::$_7::operator()(param_1, param_2);
    }

    // 0x100c407b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c408c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&): jumps straight to the base-object constructor

    // 0x100c40a20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::__8, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __8* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_8, void>(bool->BeginInternal()::$_8&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BeginInternal(bool)::$_8, void>(bool->BeginInternal()::$_8&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_8, void>(bool->BeginInternal()::$_8&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40a60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40a70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8,
   void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c40a80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40a90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8,
   void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->BeginInternal()::$_8::operator()(param_1, param_2);
    }

    // 0x100c40ad0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c40ae0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&): jumps straight to the base-object constructor

    // 0x100c40c40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::__9, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __9* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_9, void>(bool->BeginInternal()::$_9&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BeginInternal(bool)::$_9, void>(bool->BeginInternal()::$_9&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_9, void>(bool->BeginInternal()::$_9&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40c80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40c90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9,
   void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c40ca0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40cb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9,
   void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->BeginInternal()::$_9::operator()(param_1, param_2);
    }

    // 0x100c40cf0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c40d00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&): jumps straight to the base-object constructor

    // 0x100c40e60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::__10, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __10* param_1) {
        *(undefined8*)this = 0;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_10, void>(bool->BeginInternal()::$_10&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::BeginInternal(bool)::$_10, void>(bool->BeginInternal()::$_10&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_10, void>(bool->BeginInternal()::$_10&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40ea0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40eb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10,
   void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c40ec0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c40ed0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10,
   void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->BeginInternal()::$_10::operator()(param_1, param_2);
    }

    // 0x100c40ef0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c40f00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&): jumps straight to the base-object constructor

    // 0x100c41060, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::__11, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __11* param_1) {
        *(undefined8*)this = 0;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_11, void>(bool->BeginInternal()::$_11&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::BeginInternal(bool)::$_11, void>(bool->BeginInternal()::$_11&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_11, void>(bool->BeginInternal()::$_11&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c410a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c410b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11,
   void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c410c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c410d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11,
   void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->BeginInternal()::$_11::operator()(param_1, param_2);
    }

    // 0x100c410f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c41270, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&): jumps straight to the base-object constructor

    // 0x100c413d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::__13,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __13* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 144) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_13&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::EndInternal(
                                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
                                 void>(
            (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_13&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_13&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41410, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41420, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
   void>(render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>
   const&)::$_13&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c41430, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41440, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
   void>(render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>
   const&)::$_13&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->EndInternal()::$_13::operator()(param_1, param_2);
    }

    // 0x100c41470, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c41480, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&): jumps straight to the base-object constructor

    // 0x100c415e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::__14,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __14* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 144) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_14&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::EndInternal(
                                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
                                 void>(
            (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_14&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_14&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41620, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41630, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
   void>(render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>
   const&)::$_14&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c41640, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41650, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
   void>(render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>
   const&)::$_14&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->EndInternal()::$_14::operator()(param_1, param_2);
    }

    // 0x100c41680, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c41690, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&): jumps straight to the base-object constructor

    // 0x100c417f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::__15,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __15* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 144) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_15&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::EndInternal(
                                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
                                 void>(
            (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_15&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_15&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41830, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41840, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
   void>(render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>
   const&)::$_15&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c41850, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41860, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
   void>(render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>
   const&)::$_15&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->EndInternal()::$_15::operator()(param_1, param_2);
    }

    // 0x100c41a00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c41a10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&): jumps straight to the base-object constructor

    // 0x100c41b70, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::__16,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __16* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 144) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_16&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::EndInternal(
                                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
                                 void>(
            (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_16&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_16&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41bb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41bc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
   void>(render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>
   const&)::$_16&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c41bd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41be0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
   void>(render::RenderContext::EndInternal(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>
   const&)::$_16&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->EndInternal()::$_16::operator()(param_1, param_2);
    }

    // 0x100c41d00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16, void>(render::RenderContext::EndInternal(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c41d20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&): jumps straight to the base-object constructor

    // 0x100c41e80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::__18, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __18* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41ec0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41ed0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::Present()::$_18,
   void>(render::RenderContext::Present()::$_18&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c41ee0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c41ef0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::Present()::$_18,
   void>(render::RenderContext::Present()::$_18&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::Present()::$_18::operator()(param_1, param_2);
    }

    // 0x100c41f20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c41f30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&): jumps straight to the base-object constructor

    // 0x100c42090, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::__19, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __19* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c420d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c420e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::Present()::$_19,
   void>(render::RenderContext::Present()::$_19&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c420f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c42100, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::Present()::$_19,
   void>(render::RenderContext::Present()::$_19&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::Present()::$_19::operator()(param_1, param_2);
    }

    // 0x100c42130, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c42140, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&): jumps straight to the base-object constructor

    // 0x100c422a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::__20, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __20* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20, void>(
                (render::InputAssemblerState_const*)->SetInputAssemblerState()::$_20&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20, void>(
                (render::InputAssemblerState_const*)->SetInputAssemblerState()::$_20&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20, void>(
                (render::InputAssemblerState_const*)->SetInputAssemblerState()::$_20&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c422e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c422f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState
   const*)::$_20,
   void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState
   const*)::$_20&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c42300, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c42310, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState
   const*)::$_20,
   void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState
   const*)::$_20&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::InputAssemblerState_const*)->SetInputAssemblerState()::$_20::operator()(param_1, param_2);
    }

    // 0x100c42340, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_20&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c42350, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&): jumps straight to the base-object constructor

    // 0x100c424b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::__21, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __21* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21, void>(
                (render::InputAssemblerState_const*)->SetInputAssemblerState()::$_21&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21, void>(
                (render::InputAssemblerState_const*)->SetInputAssemblerState()::$_21&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21, void>(
                (render::InputAssemblerState_const*)->SetInputAssemblerState()::$_21&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c424f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c42500, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState
   const*)::$_21,
   void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState
   const*)::$_21&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c42510, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c42520, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState
   const*)::$_21,
   void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState
   const*)::$_21&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::InputAssemblerState_const*)->SetInputAssemblerState()::$_21::operator()(param_1, param_2);
    }

    // 0x100c42550, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState_const*)::$_21&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c42560, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&): jumps straight to the base-object constructor

    // 0x100c426c0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::__22, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __22* param_1) {
        *(undefined8*)this = 0;
        (render::DrawCallState&)->BindDrawCallState()::$_22::__22((__22*)(this + 16), (__22*)param_1);
        *(code**)(this + 144) = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_22&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_22&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_22&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c42740, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c42750, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::DrawCallState&)->BindDrawCallState()::$_22::__22(param_2, param_1);
    }

    // 0x100c427a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c427b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DrawCallState&)->BindDrawCallState()::$_22::operator()(param_1, param_2);
    }

    // 0x100c427e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c427f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (render::DrawCallState&)->BindDrawCallState()::$_22::~__22((__22*)this);
    }

    // 0x100c42800, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&): jumps straight to the base-object constructor

    // 0x100c42960, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::__23, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __23* param_1) {
        *(undefined8*)this = 0;
        (render::DrawCallState&)->BindDrawCallState()::$_23::__23((__23*)(this + 16), (__23*)param_1);
        *(code**)(this + 144) = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_23&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_23&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_23&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c429e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c429f0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::DrawCallState&)->BindDrawCallState()::$_23::__23(param_2, param_1);
    }

    // 0x100c42a40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c42a50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DrawCallState&)->BindDrawCallState()::$_23::operator()(param_1, param_2);
    }

    // 0x100c42a80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c42a90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (render::DrawCallState&)->BindDrawCallState()::$_23::~__23((__23*)this);
    }

    // 0x100c44a30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&): jumps straight to the base-object constructor

    // 0x100c44b90, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::__24, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __24* param_1) {
        *(undefined8*)this = 0;
        (render::DrawCallState&)->BindDrawCallState()::$_24::__24((__24*)(this + 16), (__24*)param_1);
        *(code**)(this + 144) = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_24&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_24&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_24&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c44c10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c44c20, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::DrawCallState&)->BindDrawCallState()::$_24::__24(param_2, param_1);
    }

    // 0x100c44c70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c44c80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DrawCallState&)->BindDrawCallState()::$_24::operator()(param_1, param_2);
    }

    // 0x100c44cb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c44cc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (render::DrawCallState&)->BindDrawCallState()::$_24::~__24((__24*)this);
    }

    // 0x100c44cd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&): jumps straight to the base-object constructor

    // 0x100c44e30, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::__25, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __25* param_1) {
        *(undefined8*)this = 0;
        (render::DrawCallState&)->BindDrawCallState()::$_25::__25((__25*)(this + 16), (__25*)param_1);
        *(code**)(this + 144) = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_25&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_25&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_25&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c44eb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c44ec0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::DrawCallState&)->BindDrawCallState()::$_25::__25(param_2, param_1);
    }

    // 0x100c44f10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c44f20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DrawCallState&)->BindDrawCallState()::$_25::operator()(param_1, param_2);
    }

    // 0x100c44f50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c44f60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25,
   void>(render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (render::DrawCallState&)->BindDrawCallState()::$_25::~__25((__25*)this);
    }

    // 0x100c44f70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&): jumps straight to the base-object constructor

    // 0x100c450d0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::__26, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __26* param_1) {
        *(undefined8*)this = 0;
        (render::DispatchCallState&)->BindDispatchCallState()::$_26::__26((__26*)(this + 16), (__26*)param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_26&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
            (render::DispatchCallState&)->BindDispatchCallState()::$_26&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_26&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c45150, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c45160, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_26::__26(param_2, param_1);
    }

    // 0x100c451b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c451c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_26::operator()(param_1, param_2);
    }

    // 0x100c451f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c45200, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_26::~__26((__26*)this);
    }

    // 0x100c45210, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&): jumps straight to the base-object constructor

    // 0x100c45370, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::__27, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __27* param_1) {
        *(undefined8*)this = 0;
        (render::DispatchCallState&)->BindDispatchCallState()::$_27::__27((__27*)(this + 16), (__27*)param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_27&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
            (render::DispatchCallState&)->BindDispatchCallState()::$_27&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_27&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c453f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c45400, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_27::__27(param_2, param_1);
    }

    // 0x100c45450, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c45460, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_27::operator()(param_1, param_2);
    }

    // 0x100c45490, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c454a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_27::~__27((__27*)this);
    }

    // 0x100c45b90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&): jumps straight to the base-object constructor

    // 0x100c45cf0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::__28, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __28* param_1) {
        *(undefined8*)this = 0;
        (render::DispatchCallState&)->BindDispatchCallState()::$_28::__28((__28*)(this + 16), (__28*)param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_28&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
            (render::DispatchCallState&)->BindDispatchCallState()::$_28&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_28&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c45d70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c45d80, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_28::__28(param_2, param_1);
    }

    // 0x100c45dd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c45de0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_28::operator()(param_1, param_2);
    }

    // 0x100c45e10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c45e20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_28::~__28((__28*)this);
    }

    // 0x100c45e30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&): jumps straight to the base-object constructor

    // 0x100c45f90, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::__29, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __29* param_1) {
        *(undefined8*)this = 0;
        (render::DispatchCallState&)->BindDispatchCallState()::$_29::__29((__29*)(this + 16), (__29*)param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_29&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
            (render::DispatchCallState&)->BindDispatchCallState()::$_29&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_29&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46010, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46020, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_29::__29(param_2, param_1);
    }

    // 0x100c46070, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46080, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_29::operator()(param_1, param_2);
    }

    // 0x100c460b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c460c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29,
   void>(render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (render::DispatchCallState&)->BindDispatchCallState()::$_29::~__29((__29*)this);
    }

    // 0x100c460d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&): jumps straight to the base-object constructor

    // 0x100c46230, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::__30, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __30* param_1) {
        *(undefined8*)this = 0;
        (render::Viewport_const*)->SetViewports(unsigned long)::$_30::__30((__30*)(this + 16), (__30*)param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30, void>(
                (render::Viewport_const*)->SetViewports(unsigned long)::$_30&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30, void>(
                (render::Viewport_const*)->SetViewports(unsigned long)::$_30&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30, void>(
                (render::Viewport_const*)->SetViewports(unsigned long)::$_30&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c462c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c462d0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport
   const*, unsigned long)::$_30,
   void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned
   long)::$_30&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::Viewport_const*)->SetViewports(unsigned long)::$_30::__30(param_2, param_1);
    }

    // 0x100c46330, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46340, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport
   const*, unsigned long)::$_30,
   void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned
   long)::$_30&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::Viewport_const*)->SetViewports(unsigned long)::$_30::operator()(param_1, param_2);
    }

    // 0x100c46380, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_30&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c46390, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&): jumps straight to the base-object constructor

    // 0x100c464f0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::__31, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __31* param_1) {
        *(undefined8*)this = 0;
        (render::Viewport_const*)->SetViewports(unsigned long)::$_31::__31((__31*)(this + 16), (__31*)param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31, void>(
                (render::Viewport_const*)->SetViewports(unsigned long)::$_31&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31, void>(
                (render::Viewport_const*)->SetViewports(unsigned long)::$_31&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31, void>(
                (render::Viewport_const*)->SetViewports(unsigned long)::$_31&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46580, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46590, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport
   const*, unsigned long)::$_31,
   void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned
   long)::$_31&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::Viewport_const*)->SetViewports(unsigned long)::$_31::__31(param_2, param_1);
    }

    // 0x100c465f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46600, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport
   const*, unsigned long)::$_31,
   void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned
   long)::$_31&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::Viewport_const*)->SetViewports(unsigned long)::$_31::operator()(param_1, param_2);
    }

    // 0x100c46640, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport_const*, unsigned long)::$_31&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c46650, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&): jumps straight to the base-object constructor

    // 0x100c467b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::__32, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __32* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_32&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
            bool->SetScissorRectangle(int, int, int, int)::$_32&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_32&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46800, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46810, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool,
   int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int,
   int, int)::$_32&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c46830, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46840, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool,
   int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int,
   int, int)::$_32&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->SetScissorRectangle(int, int, int, int)::$_32::operator()(param_1, param_2);
    }

    // 0x100c46880, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c46890, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&): jumps straight to the base-object constructor

    // 0x100c469f0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::__33, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __33* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_33&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
            bool->SetScissorRectangle(int, int, int, int)::$_33&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_33&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46a40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46a50, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool,
   int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int,
   int, int)::$_33&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c46a70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46a80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool,
   int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int,
   int, int)::$_33&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        bool->SetScissorRectangle(int, int, int, int)::$_33::operator()(param_1, param_2);
    }

    // 0x100c46ac0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c46ad0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&): jumps straight to the base-object constructor

    // 0x100c46c30, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::__34, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __34* param_1) {
        RenderContext* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(RenderContext**)(this + 24) = pRVar1;
        *(code**)(this + 144) =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34, void>(
                (render::RenderTargets_const*)->SetRenderTargets()::$_34&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34, void>(
            (render::RenderTargets_const*)->SetRenderTargets()::$_34&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34, void>(
                (render::RenderTargets_const*)->SetRenderTargets()::$_34&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46c70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46c80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets
   const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets
   const*)::$_34&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c46c90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46ca0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets
   const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets
   const*)::$_34&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderTargets_const*)->SetRenderTargets()::$_34::operator()(param_1, param_2);
    }

    // 0x100c46d00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_34&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c46d10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&): jumps straight to the base-object constructor

    // 0x100c46e70, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::__35, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __35* param_1) {
        RenderContext* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(RenderContext**)(this + 24) = pRVar1;
        *(code**)(this + 144) =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35, void>(
                (render::RenderTargets_const*)->SetRenderTargets()::$_35&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35, void>(
            (render::RenderTargets_const*)->SetRenderTargets()::$_35&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35, void>(
                (render::RenderTargets_const*)->SetRenderTargets()::$_35&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46eb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46ec0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets
   const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets
   const*)::$_35&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c46ed0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c46ee0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets
   const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets
   const*)::$_35&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderTargets_const*)->SetRenderTargets()::$_35::operator()(param_1, param_2);
    }

    // 0x100c46f40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets_const*)::$_35&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c46f50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36&&): jumps straight to the base-object constructor

    // 0x100c470b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::__36,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __36* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        uVar4 = *(undefined8*)(param_1 + 32);
        uVar5 = *(undefined8*)(param_1 + 40);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(code**)(this + 144) =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets_const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_36,
                     void>((render::RenderTargets_const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_36&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::ClearRenderTargets(
                                     render::RenderTargets_const*, math::Vector4T<float> const*, unsigned long)::$_36,
                                 void>(
            (render::RenderTargets_const*)->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_36&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets_const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_36,
                     void>((render::RenderTargets_const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_36&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47100, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47110, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets
   const*, math::Vector4T<float> const*, unsigned long)::$_36,
   void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
   math::Vector4T<float> const*, unsigned long)::$_36&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 40);
        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        *(undefined8*)((long)param_2 + 40) = uVar5;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c47130, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47140, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets
   const*, math::Vector4T<float> const*, unsigned long)::$_36,
   void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
   math::Vector4T<float> const*, unsigned long)::$_36&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderTargets_const*)
            ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_36::operator()(param_1, param_2);
    }

    // 0x100c471b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c471c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37&&): jumps straight to the base-object constructor

    // 0x100c47320, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::__37,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __37* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        uVar4 = *(undefined8*)(param_1 + 32);
        uVar5 = *(undefined8*)(param_1 + 40);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(code**)(this + 144) =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets_const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_37,
                     void>((render::RenderTargets_const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_37&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::ClearRenderTargets(
                                     render::RenderTargets_const*, math::Vector4T<float> const*, unsigned long)::$_37,
                                 void>(
            (render::RenderTargets_const*)->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_37&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets_const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_37,
                     void>((render::RenderTargets_const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_37&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47370, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47380, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets
   const*, math::Vector4T<float> const*, unsigned long)::$_37,
   void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
   math::Vector4T<float> const*, unsigned long)::$_37&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 40);
        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        *(undefined8*)((long)param_2 + 40) = uVar5;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c473a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c473b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets
   const*, math::Vector4T<float> const*, unsigned long)::$_37,
   void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
   math::Vector4T<float> const*, unsigned long)::$_37&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderTargets_const*)
            ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_37::operator()(param_1, param_2);
    }

    // 0x100c47420, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37, void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets_const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c47430, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&): jumps straight to the base-object constructor

    // 0x100c47590, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::__38, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __38* param_1) {
        RenderTargets* pRVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderTargets**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_38&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_38&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_38&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c475e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c475f0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float,
   unsigned int, unsigned int)::$_38,
   void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned
   int)::$_38&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c47610, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47620, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float,
   unsigned int, unsigned int)::$_38,
   void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned
   int)::$_38&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_38::operator()(param_1, param_2);
    }

    // 0x100c47690, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c476a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&): jumps straight to the base-object constructor

    // 0x100c47800, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::__39, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __39* param_1) {
        RenderTargets* pRVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderTargets**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_39&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_39&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_39&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47850, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47860, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float,
   unsigned int, unsigned int)::$_39,
   void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned
   int)::$_39&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c47880, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47890, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float,
   unsigned int, unsigned int)::$_39,
   void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned
   int)::$_39&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_39::operator()(param_1, param_2);
    }

    // 0x100c47900, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c47910, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40&&): jumps straight to the base-object constructor

    // 0x100c47a70, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::__40,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __40* param_1) {
        RenderContext* pRVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(RenderContext**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) = function<render::RenderContext::ClearDepthStencilTarget(
                                             render::RenderTargets_const*, float, unsigned int, unsigned int)::$_40,
                                         void>(
            (render::RenderTargets_const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_40&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float,
                                                                                unsigned int, unsigned int)::$_40,
                                 void>(
            (render::RenderTargets_const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_40&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::ClearDepthStencilTarget(
                                             render::RenderTargets_const*, float, unsigned int, unsigned int)::$_40,
                                         void>(
            (render::RenderTargets_const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_40&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47ac0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47ad0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets
   const*, float, unsigned int, unsigned int)::$_40,
   void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*,
   float, unsigned int, unsigned int)::$_40&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c47af0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47b00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets
   const*, float, unsigned int, unsigned int)::$_40,
   void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*,
   float, unsigned int, unsigned int)::$_40&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderTargets_const*)
            ->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_40::operator()(param_1, param_2);
    }

    // 0x100c47b70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_40&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c47b80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41&&): jumps straight to the base-object constructor

    // 0x100c47ce0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::__41,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __41* param_1) {
        RenderContext* pRVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(RenderContext**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) = function<render::RenderContext::ClearDepthStencilTarget(
                                             render::RenderTargets_const*, float, unsigned int, unsigned int)::$_41,
                                         void>(
            (render::RenderTargets_const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_41&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float,
                                                                                unsigned int, unsigned int)::$_41,
                                 void>(
            (render::RenderTargets_const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_41&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::ClearDepthStencilTarget(
                                             render::RenderTargets_const*, float, unsigned int, unsigned int)::$_41,
                                         void>(
            (render::RenderTargets_const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_41&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47d30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47d40, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets
   const*, float, unsigned int, unsigned int)::$_41,
   void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*,
   float, unsigned int, unsigned int)::$_41&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c47d60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47d70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets
   const*, float, unsigned int, unsigned int)::$_41,
   void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*,
   float, unsigned int, unsigned int)::$_41&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderTargets_const*)
            ->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_41::operator()(param_1, param_2);
    }

    // 0x100c47de0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41, void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int, unsigned int)::$_41&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets_const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c47df0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&): jumps straight to the base-object constructor

    // 0x100c47f50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::__42, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __42* param_1) {
        ShaderProgram* pSVar1;

        *(undefined8*)this = 0;
        pSVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(ShaderProgram**)(this + 24) = pSVar1;
        *(code**)(this + 144) = function<render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42, void>(
            (render::ShaderProgram_const*)->SetShaders()::$_42&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42, void>(
            (render::ShaderProgram_const*)->SetShaders()::$_42&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42, void>(
            (render::ShaderProgram_const*)->SetShaders()::$_42&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47f90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47fa0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram
   const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram
   const*)::$_42&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c47fb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c47fc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram
   const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram
   const*)::$_42&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::ShaderProgram_const*)->SetShaders()::$_42::operator()(param_1, param_2);
    }

    // 0x100c48030, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_42&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c48040, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&): jumps straight to the base-object constructor

    // 0x100c481a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::__43, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __43* param_1) {
        ShaderProgram* pSVar1;

        *(undefined8*)this = 0;
        pSVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(ShaderProgram**)(this + 24) = pSVar1;
        *(code**)(this + 144) = function<render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43, void>(
            (render::ShaderProgram_const*)->SetShaders()::$_43&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43, void>(
            (render::ShaderProgram_const*)->SetShaders()::$_43&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43, void>(
            (render::ShaderProgram_const*)->SetShaders()::$_43&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c481e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c481f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram
   const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram
   const*)::$_43&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c48200, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48210, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram
   const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram
   const*)::$_43&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::ShaderProgram_const*)->SetShaders()::$_43::operator()(param_1, param_2);
    }

    // 0x100c48280, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram_const*)::$_43&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c48290, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44&&): jumps straight to the base-object constructor

    // 0x100c483f0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::__44,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __44* param_1) {
        undefined8 uVar1;
        uint* puVar2;
        RenderContext* pRVar3;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        puVar2 = param_1->field_16;
        pRVar3 = param_1[1].field_0;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(uint**)(this + 32) = puVar2;
        *(RenderContext**)(this + 40) = pRVar3;
        *(undefined8*)(this + 48) = *(undefined8*)&param_1[1].field_8;
        *(code**)(this + 144) =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                             unsigned int const*, unsigned int const*)::$_44,
                     void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                                   unsigned int const*, unsigned int const*)::$_44&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                             unsigned int const*, unsigned int const*)::$_44,
                     void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                                   unsigned int const*, unsigned int const*)::$_44&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                             unsigned int const*, unsigned int const*)::$_44,
                     void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                                   unsigned int const*, unsigned int const*)::$_44&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c48440, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48450, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned
   int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44,
   void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const*
   const*, unsigned int const*, unsigned int const*)::$_44&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c48470, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48480, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned
   int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44,
   void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const*
   const*, unsigned int const*, unsigned int const*)::$_44&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_44::operator()(param_1, param_2);
    }

    // 0x100c48540, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c48550, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45&&): jumps straight to the base-object constructor

    // 0x100c486b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::__45,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __45* param_1) {
        undefined8 uVar1;
        uint* puVar2;
        RenderContext* pRVar3;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        puVar2 = param_1->field_16;
        pRVar3 = param_1[1].field_0;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(uint**)(this + 32) = puVar2;
        *(RenderContext**)(this + 40) = pRVar3;
        *(undefined8*)(this + 48) = *(undefined8*)&param_1[1].field_8;
        *(code**)(this + 144) =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                             unsigned int const*, unsigned int const*)::$_45,
                     void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                                   unsigned int const*, unsigned int const*)::$_45&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                             unsigned int const*, unsigned int const*)::$_45,
                     void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                                   unsigned int const*, unsigned int const*)::$_45&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                             unsigned int const*, unsigned int const*)::$_45,
                     void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                                   unsigned int const*, unsigned int const*)::$_45&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c48700, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48710, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned
   int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45,
   void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const*
   const*, unsigned int const*, unsigned int const*)::$_45&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c48730, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48740, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned
   int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45,
   void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const*
   const*, unsigned int const*, unsigned int const*)::$_45&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_45::operator()(param_1, param_2);
    }

    // 0x100c48800, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45, void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer_const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c48810, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&): jumps straight to the base-object constructor

    // 0x100c48970, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::__46, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __46* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int,
                                                            unsigned int)::$_46,
                     void>((render::VertexBuffer_const*)->SetVertexBuffer(unsigned int, unsigned int)::$_46&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int,
                                                            unsigned int)::$_46,
                     void>((render::VertexBuffer_const*)->SetVertexBuffer(unsigned int, unsigned int)::$_46&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int,
                                                            unsigned int)::$_46,
                     void>((render::VertexBuffer_const*)->SetVertexBuffer(unsigned int, unsigned int)::$_46&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c489c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c489d0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer
   const*, unsigned int, unsigned int)::$_46,
   void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
   unsigned int)::$_46&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c489f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48a00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer
   const*, unsigned int, unsigned int)::$_46,
   void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
   unsigned int)::$_46&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::VertexBuffer_const*)->SetVertexBuffer(unsigned int, unsigned int)::$_46::operator()(param_1, param_2);
    }

    // 0x100c48a70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c48a80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&): jumps straight to the base-object constructor

    // 0x100c48be0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::__47, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __47* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int,
                                                            unsigned int)::$_47,
                     void>((render::VertexBuffer_const*)->SetVertexBuffer(unsigned int, unsigned int)::$_47&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int,
                                                            unsigned int)::$_47,
                     void>((render::VertexBuffer_const*)->SetVertexBuffer(unsigned int, unsigned int)::$_47&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int,
                                                            unsigned int)::$_47,
                     void>((render::VertexBuffer_const*)->SetVertexBuffer(unsigned int, unsigned int)::$_47&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c48c30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48c40, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer
   const*, unsigned int, unsigned int)::$_47,
   void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
   unsigned int)::$_47&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c48c60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48c70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer
   const*, unsigned int, unsigned int)::$_47,
   void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
   unsigned int)::$_47&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::VertexBuffer_const*)->SetVertexBuffer(unsigned int, unsigned int)::$_47::operator()(param_1, param_2);
    }

    // 0x100c48ce0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer_const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c48cf0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&): jumps straight to the base-object constructor

    // 0x100c48e50, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::__48, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __48* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(RenderContext**)(this + 32) = param_1[1].field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48, void>(
                (render::IndexBuffer_const*)->SetIndexBuffer(unsigned int)::$_48&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48, void>(
                (render::IndexBuffer_const*)->SetIndexBuffer(unsigned int)::$_48&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48, void>(
                (render::IndexBuffer_const*)->SetIndexBuffer(unsigned int)::$_48&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c48ea0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48eb0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer
   const*, unsigned int)::$_48,
   void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned
   int)::$_48&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c48ed0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c48ee0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer
   const*, unsigned int)::$_48,
   void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned
   int)::$_48&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::IndexBuffer_const*)->SetIndexBuffer(unsigned int)::$_48::operator()(param_1, param_2);
    }

    // 0x100c48f50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_48&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c48f60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&): jumps straight to the base-object constructor

    // 0x100c490c0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::__49, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __49* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(RenderContext**)(this + 32) = param_1[1].field_0;
        *(code**)(this + 144) =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49, void>(
                (render::IndexBuffer_const*)->SetIndexBuffer(unsigned int)::$_49&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49, void>(
                (render::IndexBuffer_const*)->SetIndexBuffer(unsigned int)::$_49&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49, void>(
                (render::IndexBuffer_const*)->SetIndexBuffer(unsigned int)::$_49&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49110, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49120, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer
   const*, unsigned int)::$_49,
   void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned
   int)::$_49&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c49140, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49150, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer
   const*, unsigned int)::$_49,
   void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned
   int)::$_49&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::IndexBuffer_const*)->SetIndexBuffer(unsigned int)::$_49::operator()(param_1, param_2);
    }

    // 0x100c491c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer_const*, unsigned int)::$_49&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c491d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&): jumps straight to the base-object constructor

    // 0x100c49330, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::__50, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __50* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(code**)(this + 144) =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50, void>(
                (render::VertexDeclaration_const*)->SetVertexDeclaration()::$_50&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50, void>(
                (render::VertexDeclaration_const*)->SetVertexDeclaration()::$_50&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50, void>(
                (render::VertexDeclaration_const*)->SetVertexDeclaration()::$_50&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49370, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49380, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration
   const*)::$_50,
   void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration
   const*)::$_50&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c49390, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c493a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration
   const*)::$_50,
   void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration
   const*)::$_50&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::VertexDeclaration_const*)->SetVertexDeclaration()::$_50::operator()(param_1, param_2);
    }

    // 0x100c49400, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_50&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c49410, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&): jumps straight to the base-object constructor

    // 0x100c49570, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::__51, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __51* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(code**)(this + 144) =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51, void>(
                (render::VertexDeclaration_const*)->SetVertexDeclaration()::$_51&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51, void>(
                (render::VertexDeclaration_const*)->SetVertexDeclaration()::$_51&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51, void>(
                (render::VertexDeclaration_const*)->SetVertexDeclaration()::$_51&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c495b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c495c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration
   const*)::$_51,
   void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration
   const*)::$_51&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c495d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c495e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration
   const*)::$_51,
   void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration
   const*)::$_51&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::VertexDeclaration_const*)->SetVertexDeclaration()::$_51::operator()(param_1, param_2);
    }

    // 0x100c49640, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration_const*)::$_51&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c49650, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52&&): jumps straight to the base-object constructor

    // 0x100c497b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::__52,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __52* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        uVar4 = *(undefined8*)(param_1 + 32);
        uVar5 = *(undefined8*)(param_1 + 40);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(code**)(this + 144) =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                                    render::SamplerState_const*, bool)::$_52,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture_const*, unsigned int,
                                                                 render::SamplerState_const*, bool)::$_52&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                                    render::SamplerState_const*, bool)::$_52,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture_const*, unsigned int,
                                                                 render::SamplerState_const*, bool)::$_52&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                                    render::SamplerState_const*, bool)::$_52,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture_const*, unsigned int,
                                                                 render::SamplerState_const*, bool)::$_52&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49800, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_52&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49810, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned
   int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52,
   void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture
   const*, unsigned int, render::SamplerState const*, bool)::$_52&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_52&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 40);
        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        *(undefined8*)((long)param_2 + 40) = uVar5;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c49830, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_52&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49840, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned
   int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52,
   void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture
   const*, unsigned int, render::SamplerState const*, bool)::$_52&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_52&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->SetVSTextureSamplerPair(render::Texture_const*, unsigned int, render::SamplerState_const*,
                                              bool)::$_52::operator()(param_1, param_2);
    }

    // 0x100c49860, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_52&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_52&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c49870, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53&&): jumps straight to the base-object constructor

    // 0x100c499d0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::__53,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __53* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        uVar4 = *(undefined8*)(param_1 + 32);
        uVar5 = *(undefined8*)(param_1 + 40);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(code**)(this + 144) =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                                    render::SamplerState_const*, bool)::$_53,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture_const*, unsigned int,
                                                                 render::SamplerState_const*, bool)::$_53&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                                    render::SamplerState_const*, bool)::$_53,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture_const*, unsigned int,
                                                                 render::SamplerState_const*, bool)::$_53&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                                    render::SamplerState_const*, bool)::$_53,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture_const*, unsigned int,
                                                                 render::SamplerState_const*, bool)::$_53&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49a20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_53&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49a30, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned
   int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53,
   void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture
   const*, unsigned int, render::SamplerState const*, bool)::$_53&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_53&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 40);
        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        *(undefined8*)((long)param_2 + 40) = uVar5;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c49a50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_53&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49a60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned
   int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53,
   void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture
   const*, unsigned int, render::SamplerState const*, bool)::$_53&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_53&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->SetVSTextureSamplerPair(render::Texture_const*, unsigned int, render::SamplerState_const*,
                                              bool)::$_53::operator()(param_1, param_2);
    }

    // 0x100c49a80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53, void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int, render::SamplerState const*, bool)::$_53&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                       render::SamplerState_const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture_const*, unsigned int,
                                                             render::SamplerState_const*, bool)::$_53&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c49a90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54&&): jumps straight to the base-object constructor

    // 0x100c49bf0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::__54,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __54* param_1) {
        undefined8 uVar1;
        Texture* pTVar2;
        undefined8 uVar3;
        SamplerState* pSVar4;
        undefined8 uVar5;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        pTVar2 = param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        pSVar4 = param_1->field_32;
        uVar5 = *(undefined8*)&param_1->field_40;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(Texture**)(this + 32) = pTVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(SamplerState**)(this + 48) = pSVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(code**)(this + 144) =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                                    render::SamplerState_const*, bool)::$_54,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture_const*, int,
                                                                 render::SamplerState_const*, bool)::$_54&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                                    render::SamplerState_const*, bool)::$_54,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture_const*, int,
                                                                 render::SamplerState_const*, bool)::$_54&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                                    render::SamplerState_const*, bool)::$_54,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture_const*, int,
                                                                 render::SamplerState_const*, bool)::$_54&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49c40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_54&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49c50, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned
   int, render::Texture const*, int, render::SamplerState const*, bool)::$_54,
   void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture
   const*, int, render::SamplerState const*, bool)::$_54&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_54&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 40);
        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        *(undefined8*)((long)param_2 + 40) = uVar5;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c49c70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_54&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49c80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned
   int, render::Texture const*, int, render::SamplerState const*, bool)::$_54,
   void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture
   const*, int, render::SamplerState const*, bool)::$_54&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_54&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->SetPSTextureSamplerPair(render::Texture_const*, int, render::SamplerState_const*,
                                              bool)::$_54::operator()(param_1, param_2);
    }

    // 0x100c49cc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_54&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_54&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c49cd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55&&): jumps straight to the base-object constructor

    // 0x100c49e30, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::__55,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __55* param_1) {
        undefined8 uVar1;
        Texture* pTVar2;
        undefined8 uVar3;
        SamplerState* pSVar4;
        undefined8 uVar5;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        pTVar2 = param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        pSVar4 = param_1->field_32;
        uVar5 = *(undefined8*)&param_1->field_40;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(Texture**)(this + 32) = pTVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(SamplerState**)(this + 48) = pSVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(code**)(this + 144) =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                                    render::SamplerState_const*, bool)::$_55,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture_const*, int,
                                                                 render::SamplerState_const*, bool)::$_55&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                                    render::SamplerState_const*, bool)::$_55,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture_const*, int,
                                                                 render::SamplerState_const*, bool)::$_55&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                                    render::SamplerState_const*, bool)::$_55,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture_const*, int,
                                                                 render::SamplerState_const*, bool)::$_55&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49e80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_55&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49e90, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned
   int, render::Texture const*, int, render::SamplerState const*, bool)::$_55,
   void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture
   const*, int, render::SamplerState const*, bool)::$_55&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_55&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 40);
        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        *(undefined8*)((long)param_2 + 40) = uVar5;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c49eb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_55&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c49ec0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned
   int, render::Texture const*, int, render::SamplerState const*, bool)::$_55,
   void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture
   const*, int, render::SamplerState const*, bool)::$_55&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_55&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->SetPSTextureSamplerPair(render::Texture_const*, int, render::SamplerState_const*,
                                              bool)::$_55::operator()(param_1, param_2);
    }

    // 0x100c49f00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55, void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int, render::SamplerState const*, bool)::$_55&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                       render::SamplerState_const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture_const*, int,
                                                             render::SamplerState_const*, bool)::$_55&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c49f10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&): jumps straight to the base-object constructor

    // 0x100c4a070, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::__56, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __56* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_56&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_56&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_56&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4a0c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4a0d0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned
   int, render::ShaderConstBuffer const*)::$_56,
   void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int,
   render::ShaderConstBuffer const*)::$_56&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4a0f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4a100, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned
   int, render::ShaderConstBuffer const*)::$_56,
   void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int,
   render::ShaderConstBuffer const*)::$_56&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_56::operator()(param_1, param_2);
    }

    // 0x100c4a170, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_56&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4a180, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&): jumps straight to the base-object constructor

    // 0x100c4a2e0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::__57, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __57* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_57&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_57&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_57&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4a330, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4a340, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned
   int, render::ShaderConstBuffer const*)::$_57,
   void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int,
   render::ShaderConstBuffer const*)::$_57&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4a360, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4a370, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned
   int, render::ShaderConstBuffer const*)::$_57,
   void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int,
   render::ShaderConstBuffer const*)::$_57&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_57::operator()(param_1, param_2);
    }

    // 0x100c4a3e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_57&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4a3f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&): jumps straight to the base-object constructor

    // 0x100c4a550, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::__58, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __58* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_58&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_58&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_58&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4a5a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4a5b0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned
   int, render::ShaderConstBuffer const*)::$_58,
   void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int,
   render::ShaderConstBuffer const*)::$_58&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4a5d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4a5e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned
   int, render::ShaderConstBuffer const*)::$_58,
   void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int,
   render::ShaderConstBuffer const*)::$_58&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_58::operator()(param_1, param_2);
    }

    // 0x100c4a650, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_58&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4a660, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&): jumps straight to the base-object constructor

    // 0x100c4a7c0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::__59, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __59* param_1) {
        RenderResource* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(RenderResource**)(this + 24) = pRVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_59&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_59&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_59&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4a810, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4a820, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned
   int, render::ShaderConstBuffer const*)::$_59,
   void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int,
   render::ShaderConstBuffer const*)::$_59&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4a840, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4a850, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned
   int, render::ShaderConstBuffer const*)::$_59,
   void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int,
   render::ShaderConstBuffer const*)::$_59&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer_const*)::$_59::operator()(param_1, param_2);
    }

    // 0x100c4a8c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer_const*)::$_59&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4a8d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&): jumps straight to the base-object constructor

    // 0x100c4aa30, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::__60, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __60* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        long lVar7;

        *(undefined8*)this = 0;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_16;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_32;
        uVar5 = param_1->field_40;
        uVar6 = *(undefined8*)&param_1->field_48;
        lVar7 = param_1->field_56;
        *(undefined8*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(undefined8*)(this + 64) = uVar6;
        *(long*)(this + 72) = lVar7;
        *(code**)(this + 144) =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60, void>(
                (render::DepthStencilState_const*)->SetDepthStencilState()::$_60&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60, void>(
                (render::DepthStencilState_const*)->SetDepthStencilState()::$_60&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60, void>(
                (render::DepthStencilState_const*)->SetDepthStencilState()::$_60&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4aa90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4aaa0, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState
   const*)::$_60,
   void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState
   const*)::$_60&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 32);
        uVar6 = *(undefined8*)((long)param_1 + 40);
        uVar7 = *(undefined8*)((long)param_1 + 56);
        *(undefined8*)((long)param_2 + 48) = *(undefined8*)((long)param_1 + 48);
        *(undefined8*)((long)param_2 + 56) = uVar7;
        *(undefined8*)((long)param_2 + 32) = uVar5;
        *(undefined8*)((long)param_2 + 40) = uVar6;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c4aad0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4aae0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState
   const*)::$_60,
   void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState
   const*)::$_60&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DepthStencilState_const*)->SetDepthStencilState()::$_60::operator()(param_1, param_2);
    }

    // 0x100c4ab60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_60&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4ab70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&): jumps straight to the base-object constructor

    // 0x100c4acd0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::__61, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __61* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        long lVar7;

        *(undefined8*)this = 0;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_16;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_32;
        uVar5 = param_1->field_40;
        uVar6 = *(undefined8*)&param_1->field_48;
        lVar7 = param_1->field_56;
        *(undefined8*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(undefined8*)(this + 64) = uVar6;
        *(long*)(this + 72) = lVar7;
        *(code**)(this + 144) =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61, void>(
                (render::DepthStencilState_const*)->SetDepthStencilState()::$_61&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61, void>(
                (render::DepthStencilState_const*)->SetDepthStencilState()::$_61&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61, void>(
                (render::DepthStencilState_const*)->SetDepthStencilState()::$_61&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4ad30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ad40, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState
   const*)::$_61,
   void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState
   const*)::$_61&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 32);
        uVar6 = *(undefined8*)((long)param_1 + 40);
        uVar7 = *(undefined8*)((long)param_1 + 56);
        *(undefined8*)((long)param_2 + 48) = *(undefined8*)((long)param_1 + 48);
        *(undefined8*)((long)param_2 + 56) = uVar7;
        *(undefined8*)((long)param_2 + 32) = uVar5;
        *(undefined8*)((long)param_2 + 40) = uVar6;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c4ad70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ad80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState
   const*)::$_61,
   void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState
   const*)::$_61&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::DepthStencilState_const*)->SetDepthStencilState()::$_61::operator()(param_1, param_2);
    }

    // 0x100c4ae00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState_const*)::$_61&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4ae10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&): jumps straight to the base-object constructor

    // 0x100c4af70, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::__62, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __62* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        uVar1 = param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)((long)&param_1->field_17 + 7);
        *(undefined8*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(long*)(this + 48) = param_1->field_32;
        *(code**)(this + 144) =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62, void>(
                (render::RasteriserState_const*)->SetRasteriserState()::$_62&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62, void>(
            (render::RasteriserState_const*)->SetRasteriserState()::$_62&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62, void>(
                (render::RasteriserState_const*)->SetRasteriserState()::$_62&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4afc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4afd0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState
   const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState
   const*)::$_62&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c4aff0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4b000, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState
   const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState
   const*)::$_62&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RasteriserState_const*)->SetRasteriserState()::$_62::operator()(param_1, param_2);
    }

    // 0x100c4b080, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_62&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4b090, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&): jumps straight to the base-object constructor

    // 0x100c4b1f0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::__63, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __63* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        uVar1 = param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)((long)&param_1->field_17 + 7);
        *(undefined8*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(long*)(this + 48) = param_1->field_32;
        *(code**)(this + 144) =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63, void>(
                (render::RasteriserState_const*)->SetRasteriserState()::$_63&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63, void>(
            (render::RasteriserState_const*)->SetRasteriserState()::$_63&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63, void>(
                (render::RasteriserState_const*)->SetRasteriserState()::$_63&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4b240, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4b250, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState
   const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState
   const*)::$_63&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c4b270, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4b280, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState
   const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState
   const*)::$_63&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RasteriserState_const*)->SetRasteriserState()::$_63::operator()(param_1, param_2);
    }

    // 0x100c4b300, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState_const*)::$_63&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4b310, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&): jumps straight to the base-object constructor

    // 0x100c4b470, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::__64, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __64* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        long lVar8;

        *(undefined8*)this = 0;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_16;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_32;
        uVar5 = param_1->field_40;
        uVar6 = param_1->field_48;
        uVar7 = param_1->field_56;
        *(undefined8*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(undefined8*)(this + 64) = uVar6;
        *(undefined8*)(this + 72) = uVar7;
        lVar8 = param_1->field_72;
        *(undefined8*)(this + 80) = *(undefined8*)&param_1->field_64;
        *(long*)(this + 88) = lVar8;
        *(code**)(this + 144) = function<render::RenderContext::SetBlendState(render::BlendState_const*)::$_64, void>(
            (render::BlendState_const*)->SetBlendState()::$_64&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetBlendState(render::BlendState_const*)::$_64, void>(
            (render::BlendState_const*)->SetBlendState()::$_64&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetBlendState(render::BlendState_const*)::$_64, void>(
            (render::BlendState_const*)->SetBlendState()::$_64&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4b4d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4b4e0, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState
   const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState
   const*)::$_64&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)((long)param_1 + 72);
        *(undefined8*)((long)param_2 + 64) = *(undefined8*)((long)param_1 + 64);
        *(undefined8*)((long)param_2 + 72) = uVar1;
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 32);
        uVar6 = *(undefined8*)((long)param_1 + 40);
        uVar7 = *(undefined8*)((long)param_1 + 56);
        *(undefined8*)((long)param_2 + 48) = *(undefined8*)((long)param_1 + 48);
        *(undefined8*)((long)param_2 + 56) = uVar7;
        *(undefined8*)((long)param_2 + 32) = uVar5;
        *(undefined8*)((long)param_2 + 40) = uVar6;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c4b510, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4b520, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState
   const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState
   const*)::$_64&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::BlendState_const*)->SetBlendState()::$_64::operator()(param_1, param_2);
    }

    // 0x100c4b5a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_64&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4b5b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&): jumps straight to the base-object constructor

    // 0x100c4b710, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::__65, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __65* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        long lVar8;

        *(undefined8*)this = 0;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_16;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_32;
        uVar5 = param_1->field_40;
        uVar6 = param_1->field_48;
        uVar7 = param_1->field_56;
        *(undefined8*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(undefined8*)(this + 64) = uVar6;
        *(undefined8*)(this + 72) = uVar7;
        lVar8 = param_1->field_72;
        *(undefined8*)(this + 80) = *(undefined8*)&param_1->field_64;
        *(long*)(this + 88) = lVar8;
        *(code**)(this + 144) = function<render::RenderContext::SetBlendState(render::BlendState_const*)::$_65, void>(
            (render::BlendState_const*)->SetBlendState()::$_65&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetBlendState(render::BlendState_const*)::$_65, void>(
            (render::BlendState_const*)->SetBlendState()::$_65&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetBlendState(render::BlendState_const*)::$_65, void>(
            (render::BlendState_const*)->SetBlendState()::$_65&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4b770, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4b780, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState
   const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState
   const*)::$_65&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)((long)param_1 + 72);
        *(undefined8*)((long)param_2 + 64) = *(undefined8*)((long)param_1 + 64);
        *(undefined8*)((long)param_2 + 72) = uVar1;
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 32);
        uVar6 = *(undefined8*)((long)param_1 + 40);
        uVar7 = *(undefined8*)((long)param_1 + 56);
        *(undefined8*)((long)param_2 + 48) = *(undefined8*)((long)param_1 + 48);
        *(undefined8*)((long)param_2 + 56) = uVar7;
        *(undefined8*)((long)param_2 + 32) = uVar5;
        *(undefined8*)((long)param_2 + 40) = uVar6;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c4b7b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4b7c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState
   const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState
   const*)::$_65&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::BlendState_const*)->SetBlendState()::$_65::operator()(param_1, param_2);
    }

    // 0x100c4b840, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState_const*)::$_65&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4b850, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&): jumps straight to the base-object constructor

    // 0x100c4b9b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::__66, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __66* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_66&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
            (render::PrimitiveType)->DrawPrimitives(int, int)::$_66&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_66&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4ba00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ba10, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType,
   int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType,
   int, int)::$_66&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4ba30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ba40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType,
   int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType,
   int, int)::$_66&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::PrimitiveType)->DrawPrimitives(int, int)::$_66::operator()(param_1, param_2);
    }

    // 0x100c4ba90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4baa0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&): jumps straight to the base-object constructor

    // 0x100c4bc00, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::__67, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __67* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_67&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
            (render::PrimitiveType)->DrawPrimitives(int, int)::$_67&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_67&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4bc50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4bc60, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType,
   int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType,
   int, int)::$_67&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4bc80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4bc90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType,
   int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType,
   int, int)::$_67&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::PrimitiveType)->DrawPrimitives(int, int)::$_67::operator()(param_1, param_2);
    }

    // 0x100c4bce0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4bcf0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68&&): jumps straight to the base-object constructor

    // 0x100c4be50, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::__68,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __68* param_1) {
        *(undefined8*)this = 0;
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68::__68((__68*)(this + 16), (__68*)param_1);
        *(code**)(this + 144) = function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
                                                                                    int const*, int const*)::$_68,
                                         void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
                                                                            int const*, int const*)::$_68,
                                 void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
                                                                                    int const*, int const*)::$_68,
                                         void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4bef0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4bf00, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType,
   unsigned int, int const*, int const*)::$_68,
   void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
   int const*, int const*)::$_68&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68::__68(param_2, param_1);
    }

    // 0x100c4bf70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4bf80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType,
   unsigned int, int const*, int const*)::$_68,
   void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
   int const*, int const*)::$_68&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68::operator()(param_1, param_2);
    }

    // 0x100c4c010, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4c020, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69&&): jumps straight to the base-object constructor

    // 0x100c4c180, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::__69,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __69* param_1) {
        *(undefined8*)this = 0;
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69::__69((__69*)(this + 16), (__69*)param_1);
        *(code**)(this + 144) = function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
                                                                                    int const*, int const*)::$_69,
                                         void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
                                                                            int const*, int const*)::$_69,
                                 void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
                                                                                    int const*, int const*)::$_69,
                                         void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4c220, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4c230, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType,
   unsigned int, int const*, int const*)::$_69,
   void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
   int const*, int const*)::$_69&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69::__69(param_2, param_1);
    }

    // 0x100c4c2a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4c2b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType,
   unsigned int, int const*, int const*)::$_69,
   void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
   int const*, int const*)::$_69&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69::operator()(param_1, param_2);
    }

    // 0x100c4c340, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69, void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4c350, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70&&): jumps straight to the base-object constructor

    // 0x100c4c4b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::__70,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __70* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this +
                  144) = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                               unsigned int, render::IndexType)::$_70,
                                  void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_70&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                              unsigned int, render::IndexType)::$_70,
                                 void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_70&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this +
                  152) = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                               unsigned int, render::IndexType)::$_70,
                                  void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_70&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4c500, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4c510, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType,
   unsigned int, unsigned int, render::IndexType)::$_70,
   void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
   unsigned int, render::IndexType)::$_70&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4c530, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4c540, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType,
   unsigned int, unsigned int, render::IndexType)::$_70,
   void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
   unsigned int, render::IndexType)::$_70&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::PrimitiveType)
            ->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_70::operator()(param_1, param_2);
    }

    // 0x100c4c590, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_70&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4c5a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71&&): jumps straight to the base-object constructor

    // 0x100c4c700, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::__71,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __71* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this +
                  144) = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                               unsigned int, render::IndexType)::$_71,
                                  void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_71&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                              unsigned int, render::IndexType)::$_71,
                                 void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_71&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this +
                  152) = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                               unsigned int, render::IndexType)::$_71,
                                  void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_71&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4c750, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4c760, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType,
   unsigned int, unsigned int, render::IndexType)::$_71,
   void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
   unsigned int, render::IndexType)::$_71&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4c780, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4c790, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType,
   unsigned int, unsigned int, render::IndexType)::$_71,
   void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
   unsigned int, render::IndexType)::$_71&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::PrimitiveType)
            ->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_71::operator()(param_1, param_2);
    }

    // 0x100c4c7e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71, void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int, render::IndexType)::$_71&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4c7f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72&&): jumps straight to the base-object constructor

    // 0x100c4c950, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::__72,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __72* param_1) {
        *(undefined8*)this = 0;
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                         render::IndexType)::$_72::__72((__72*)(this + 16), param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void_const* const*, render::IndexType)::$_72,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                                            render::IndexType)::$_72&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void_const* const*, render::IndexType)::$_72,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                                            render::IndexType)::$_72&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void_const* const*, render::IndexType)::$_72,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                                            render::IndexType)::$_72&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4c9f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_72&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ca00, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType,
   unsigned int, int const*, void const* const*, render::IndexType)::$_72,
   void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned
   int, int const*, void const* const*, render::IndexType)::$_72&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_72&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                         render::IndexType)::$_72::__72(param_2, param_1);
    }

    // 0x100c4ca70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_72&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ca80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType,
   unsigned int, int const*, void const* const*, render::IndexType)::$_72,
   void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned
   int, int const*, void const* const*, render::IndexType)::$_72&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_72&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                         render::IndexType)::$_72::operator()(param_1, param_2);
    }

    // 0x100c4cb10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_72&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_72&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4cb20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73&&): jumps straight to the base-object constructor

    // 0x100c4cc80, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::__73,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __73* param_1) {
        *(undefined8*)this = 0;
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                         render::IndexType)::$_73::__73((__73*)(this + 16), param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void_const* const*, render::IndexType)::$_73,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                                            render::IndexType)::$_73&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void_const* const*, render::IndexType)::$_73,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                                            render::IndexType)::$_73&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void_const* const*, render::IndexType)::$_73,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                                            render::IndexType)::$_73&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4cd20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_73&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4cd30, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType,
   unsigned int, int const*, void const* const*, render::IndexType)::$_73,
   void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned
   int, int const*, void const* const*, render::IndexType)::$_73&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_73&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                         render::IndexType)::$_73::__73(param_2, param_1);
    }

    // 0x100c4cda0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_73&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4cdb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType,
   unsigned int, int const*, void const* const*, render::IndexType)::$_73,
   void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned
   int, int const*, void const* const*, render::IndexType)::$_73&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_73&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void_const* const*,
                                         render::IndexType)::$_73::operator()(param_1, param_2);
    }

    // 0x100c4ce40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73, void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*, void const* const*, render::IndexType)::$_73&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void_const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void_const* const*, render::IndexType)::$_73&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4ce50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&): jumps straight to the base-object constructor

    // 0x100c4cfb0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::__74, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __74* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_74&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_74&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_74&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d000, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d010, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned
   int, unsigned int, unsigned int)::$_74,
   void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned
   int)::$_74&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4d030, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d040, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned
   int, unsigned int, unsigned int)::$_74,
   void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned
   int)::$_74&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->DispatchCompute(unsigned int, unsigned int)::$_74::operator()(param_1, param_2);
    }

    // 0x100c4d090, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4d0a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&): jumps straight to the base-object constructor

    // 0x100c4d200, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::__75, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __75* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_75&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_75&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_75&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d250, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d260, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned
   int, unsigned int, unsigned int)::$_75,
   void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned
   int)::$_75&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4d280, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d290, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned
   int, unsigned int, unsigned int)::$_75,
   void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned
   int)::$_75&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->DispatchCompute(unsigned int, unsigned int)::$_75::operator()(param_1, param_2);
    }

    // 0x100c4d2e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4d2f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_76&&): jumps straight to the base-object constructor

    // 0x100c4d450, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::__76, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __76* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
            unsigned int->MemoryBarrier()::$_76&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
            unsigned int->MemoryBarrier()::$_76&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
            unsigned int->MemoryBarrier()::$_76&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d490, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d4a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned
   int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned
   int)::$_76&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4d4b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d4c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned
   int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned
   int)::$_76&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->MemoryBarrier()::$_76::operator()(param_1, param_2);
    }

    // 0x100c4d4f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4d500, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_77&&): jumps straight to the base-object constructor

    // 0x100c4d660, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::__77, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __77* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
            unsigned int->MemoryBarrier()::$_77&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
            unsigned int->MemoryBarrier()::$_77&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
            unsigned int->MemoryBarrier()::$_77&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d6a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d6b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned
   int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned
   int)::$_77&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4d6c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d6d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned
   int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned
   int)::$_77&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->MemoryBarrier()::$_77::operator()(param_1, param_2);
    }

    // 0x100c4d700, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4d710, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::__78, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __78* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderContext::FinishRendering()::$_78, void>(
            render::RenderContext::FinishRendering()::$_78&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::FinishRendering()::$_78, void>(
            render::RenderContext::FinishRendering()::$_78&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::FinishRendering()::$_78, void>(
            render::RenderContext::FinishRendering()::$_78&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d750, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d760, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FinishRendering()::$_78,
   void>(render::RenderContext::FinishRendering()::$_78&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c4d770, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d780, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FinishRendering()::$_78,
   void>(render::RenderContext::FinishRendering()::$_78&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::FinishRendering()::$_78::operator()(param_1, param_2);
    }

    // 0x100c4d7a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4d7b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::__79, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __79* param_1) {
        Fence* pFVar1;

        *(undefined8*)this = 0;
        pFVar1 = param_1->field_8;
        *(long*)(this + 16) = param_1->field_0;
        *(Fence**)(this + 24) = pFVar1;
        *(code**)(this + 144) = function<render::RenderContext::FinishRendering()::$_79, void>(
            render::RenderContext::FinishRendering()::$_79&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::FinishRendering()::$_79, void>(
            render::RenderContext::FinishRendering()::$_79&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::FinishRendering()::$_79, void>(
            render::RenderContext::FinishRendering()::$_79&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d7f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d800, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FinishRendering()::$_79,
   void>(render::RenderContext::FinishRendering()::$_79&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4d810, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d820, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FinishRendering()::$_79,
   void>(render::RenderContext::FinishRendering()::$_79&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::FinishRendering()::$_79::operator()(param_1, param_2);
    }

    // 0x100c4d850, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4d860, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::__80, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __80* param_1) {
        *(undefined8*)this = 0;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderContext::FinishRendering()::$_80, void>(
            render::RenderContext::FinishRendering()::$_80&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::FinishRendering()::$_80, void>(
            render::RenderContext::FinishRendering()::$_80&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::FinishRendering()::$_80, void>(
            render::RenderContext::FinishRendering()::$_80&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d8a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d8b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FinishRendering()::$_80,
   void>(render::RenderContext::FinishRendering()::$_80&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c4d8c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4d8d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FinishRendering()::$_80,
   void>(render::RenderContext::FinishRendering()::$_80&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::FinishRendering()::$_80::operator()(param_1, param_2);
    }

    // 0x100c4d9d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4d9e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81&&): jumps straight to the base-object constructor

    // 0x100c4db40, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::__81,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __81* param_1) {
        Texture* pTVar1;
        RenderTargets* pRVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        *(undefined8*)this = 0;
        pTVar1 = param_1->field_8;
        pRVar2 = param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        uVar4 = *(undefined8*)&param_1->field_32;
        uVar5 = *(undefined8*)&param_1->field_40;
        uVar6 = *(undefined8*)&param_1->field_48;
        uVar7 = *(undefined8*)&param_1->field_56;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(Texture**)(this + 24) = pTVar1;
        *(RenderTargets**)(this + 32) = pRVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(undefined8*)(this + 64) = uVar6;
        *(undefined8*)(this + 72) = uVar7;
        *(code**)(this + 144) =
            function<render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_81,
                     void>((render::Texture_const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_81&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_81,
                     void>((render::Texture_const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_81&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_81,
                     void>((render::Texture_const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_81&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4dba0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4dbb0, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, render::CubeFace)::$_81,
   void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   render::CubeFace)::$_81&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 32);
        uVar6 = *(undefined8*)((long)param_1 + 40);
        uVar7 = *(undefined8*)((long)param_1 + 56);
        *(undefined8*)((long)param_2 + 48) = *(undefined8*)((long)param_1 + 48);
        *(undefined8*)((long)param_2 + 56) = uVar7;
        *(undefined8*)((long)param_2 + 32) = uVar5;
        *(undefined8*)((long)param_2 + 40) = uVar6;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c4dbe0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4dbf0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, render::CubeFace)::$_81,
   void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   render::CubeFace)::$_81&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::Texture_const*)
            ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                   unsigned int, unsigned int, render::CubeFace)::$_81::operator()(param_1, param_2);
    }

    // 0x100c4dcc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_81&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4dcd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82&&): jumps straight to the base-object constructor

    // 0x100c4de30, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::__82,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __82* param_1) {
        Texture* pTVar1;
        RenderTargets* pRVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        *(undefined8*)this = 0;
        pTVar1 = param_1->field_8;
        pRVar2 = param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        uVar4 = *(undefined8*)&param_1->field_32;
        uVar5 = *(undefined8*)&param_1->field_40;
        uVar6 = *(undefined8*)&param_1->field_48;
        uVar7 = *(undefined8*)&param_1->field_56;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(Texture**)(this + 24) = pTVar1;
        *(RenderTargets**)(this + 32) = pRVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(undefined8*)(this + 64) = uVar6;
        *(undefined8*)(this + 72) = uVar7;
        *(code**)(this + 144) =
            function<render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_82,
                     void>((render::Texture_const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_82&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_82,
                     void>((render::Texture_const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_82&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_82,
                     void>((render::Texture_const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_82&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4de90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4dea0, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, render::CubeFace)::$_82,
   void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   render::CubeFace)::$_82&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 32);
        uVar6 = *(undefined8*)((long)param_1 + 40);
        uVar7 = *(undefined8*)((long)param_1 + 56);
        *(undefined8*)((long)param_2 + 48) = *(undefined8*)((long)param_1 + 48);
        *(undefined8*)((long)param_2 + 56) = uVar7;
        *(undefined8*)((long)param_2 + 32) = uVar5;
        *(undefined8*)((long)param_2 + 40) = uVar6;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c4ded0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4dee0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, render::CubeFace)::$_82,
   void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   render::CubeFace)::$_82&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::Texture_const*)
            ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                   unsigned int, unsigned int, render::CubeFace)::$_82::operator()(param_1, param_2);
    }

    // 0x100c4dfb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82, void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::CubeFace)::$_82&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture_const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4dfc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83&&): jumps straight to the base-object constructor

    // 0x100c4e120, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::__83,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __83* param_1) {
        *(undefined8*)this = 0;
        (render::RenderTargets_const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_83::__83((__83*)(this + 16), (__83*)param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_83,
                     void>((render::RenderTargets_const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_83&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::ResolveColourTargetData(
                                     render::RenderTargets_const*, unsigned int, math::Rect<unsigned int> const&,
                                     math::Rect<unsigned int> const&)::$_83,
                                 void>((render::RenderTargets_const*)
                                           ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                                     math::Rect<unsigned int> const&)::$_83&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_83,
                     void>((render::RenderTargets_const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_83&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4e1c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4e1d0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets
   const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_83,
   void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*,
   unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_83&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::RenderTargets_const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_83::__83(param_2, param_1);
    }

    // 0x100c4e240, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4e250, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets
   const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_83,
   void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*,
   unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_83&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderTargets_const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_83::operator()(param_1, param_2);
    }

    // 0x100c4e2d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4e2e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84&&): jumps straight to the base-object constructor

    // 0x100c4e440, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::__84,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __84* param_1) {
        *(undefined8*)this = 0;
        (render::RenderTargets_const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_84::__84((__84*)(this + 16), (__84*)param_1);
        *(code**)(this + 144) =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_84,
                     void>((render::RenderTargets_const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_84&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::ResolveColourTargetData(
                                     render::RenderTargets_const*, unsigned int, math::Rect<unsigned int> const&,
                                     math::Rect<unsigned int> const&)::$_84,
                                 void>((render::RenderTargets_const*)
                                           ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                                     math::Rect<unsigned int> const&)::$_84&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_84,
                     void>((render::RenderTargets_const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_84&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4e4e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4e4f0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets
   const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_84,
   void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*,
   unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_84&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (render::RenderTargets_const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_84::__84(param_2, param_1);
    }

    // 0x100c4e560, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4e570, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets
   const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_84,
   void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*,
   unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_84&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderTargets_const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_84::operator()(param_1, param_2);
    }

    // 0x100c4e5f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84, void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets_const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4e600, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&): jumps straight to the base-object constructor

    // 0x100c4e760, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::__85, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __85* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderContext::FlushTextureCache()::$_85, void>(
            render::RenderContext::FlushTextureCache()::$_85&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::FlushTextureCache()::$_85, void>(
            render::RenderContext::FlushTextureCache()::$_85&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::FlushTextureCache()::$_85, void>(
            render::RenderContext::FlushTextureCache()::$_85&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4e7a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4e7b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85,
   void>(render::RenderContext::FlushTextureCache()::$_85&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c4e7c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4e7d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85,
   void>(render::RenderContext::FlushTextureCache()::$_85&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::FlushTextureCache()::$_85::operator()(param_1, param_2);
    }

    // 0x100c4e800, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4e810, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&): jumps straight to the base-object constructor

    // 0x100c4e970, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::__86, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __86* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderContext::FlushTextureCache()::$_86, void>(
            render::RenderContext::FlushTextureCache()::$_86&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::FlushTextureCache()::$_86, void>(
            render::RenderContext::FlushTextureCache()::$_86&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::FlushTextureCache()::$_86, void>(
            render::RenderContext::FlushTextureCache()::$_86&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4e9b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4e9c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86,
   void>(render::RenderContext::FlushTextureCache()::$_86&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c4e9d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4e9e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86,
   void>(render::RenderContext::FlushTextureCache()::$_86&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::FlushTextureCache()::$_86::operator()(param_1, param_2);
    }

    // 0x100c4ea10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4ea20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&): jumps straight to the base-object constructor

    // 0x100c4eb80, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::__87, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __87* param_1) {
        *(undefined8*)this = 0;
        (shared_ptr<OpenGLView> const&)->SetView()::$_87::__87((__87*)(this + 16), param_1);
        *(code**)(this + 144) = function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_87&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_87&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_87&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4ec00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ec10, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_87&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_87::__87(param_2, param_1);
    }

    // 0x100c4ec60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ec70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_87&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_87::operator()(param_1, param_2);
    }

    // 0x100c4ecb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c4ecc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_87, void>(render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_87&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_87::~__87((__87*)this);
    }

    // 0x100c4ecd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&): jumps straight to the base-object constructor

    // 0x100c4ee30, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::__88, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __88* param_1) {
        *(undefined8*)this = 0;
        (shared_ptr<OpenGLView> const&)->SetView()::$_88::__88((__88*)(this + 16), param_1);
        *(code**)(this + 144) = function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_88&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_88&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_88&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4eeb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4eec0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_88&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_88::__88(param_2, param_1);
    }

    // 0x100c4ef10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4ef20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_88&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_88::operator()(param_1, param_2);
    }

    // 0x100c4ef60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c4ef70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_88, void>(render::RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_88&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_88::~__88((__88*)this);
    }

    // 0x100c4ef80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::__89, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __89* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderContext::OnDeviceLost()::$_89, void>(
            render::RenderContext::OnDeviceLost()::$_89&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::OnDeviceLost()::$_89, void>(
            render::RenderContext::OnDeviceLost()::$_89&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::OnDeviceLost()::$_89, void>(
            render::RenderContext::OnDeviceLost()::$_89&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4efc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4efd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89,
   void>(render::RenderContext::OnDeviceLost()::$_89&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c4efe0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4eff0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89,
   void>(render::RenderContext::OnDeviceLost()::$_89&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::OnDeviceLost()::$_89::operator()(param_1, param_2);
    }

    // 0x100c4f020, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4f030, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&): jumps straight to the base-object constructor

    // 0x100c4f190, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::__90, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __90* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
            (render::VSyncMode)->SetVSyncMode()::$_90&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
            (render::VSyncMode)->SetVSyncMode()::$_90&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
            (render::VSyncMode)->SetVSyncMode()::$_90&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4f1d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4f1e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90,
   void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4f1f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4f200, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90,
   void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::VSyncMode)->SetVSyncMode()::$_90::operator()(param_1, param_2);
    }

    // 0x100c4f230, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c4f240, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&): jumps straight to the base-object constructor

    // 0x100c4f3a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::__91, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __91* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
            (render::VSyncMode)->SetVSyncMode()::$_91&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
            (render::VSyncMode)->SetVSyncMode()::$_91&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
            (render::VSyncMode)->SetVSyncMode()::$_91&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4f3e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4f3f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91,
   void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c4f400, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c4f410, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91,
   void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::VSyncMode)->SetVSyncMode()::$_91::operator()(param_1, param_2);
    }

    // 0x100c4f440, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c500b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::__94, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __94* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = param_1->field_8;
        *(undefined8*)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::RenderContext::ResetDeferredFrames()::$_94, void>(
            render::RenderContext::ResetDeferredFrames()::$_94&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::ResetDeferredFrames()::$_94, void>(
            render::RenderContext::ResetDeferredFrames()::$_94&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::ResetDeferredFrames()::$_94, void>(
            render::RenderContext::ResetDeferredFrames()::$_94&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c500f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c50100, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94,
   void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c50110, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c50120, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94,
   void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::ResetDeferredFrames()::$_94::operator()(param_1, param_2);
    }

    // 0x100c501e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}, void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}&&): jumps straight to the base-object constructor

    // 0x100c501f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}, void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}&&)
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const::{lambda(BaseApp*)#1},
   void>(render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const::{lambda(BaseApp*)#1}&&) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::operator()(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, _lambda_jag__BaseApp___1_* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) =
            function < render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
            lambda(void*, void*) #1
        }
        (BaseApp*)#1
    },void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)const::{
        lambda(void*, void*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(code**)this =
    function < render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(void*, BaseApp*) #1
}
(BaseApp*)#1
},void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)const::{
    lambda(void*, BaseApp*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*, BaseApp*) #1
}
::BaseApp__;
*(code**)(this + 152) =
    function < render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(void*) #1
}
(BaseApp*)#1
},void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)const::{
    lambda(void*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x100c50230, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}, void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(void*, void*) #1
}
(BaseApp*)#1
},void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)const::{
    lambda(void*, void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    function < render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
                   const ::{
        lambda(BaseApp*) #1
    }
    , void > (render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100c50240, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}, void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const::{lambda(BaseApp*)#1},
   void>(render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&) const ::{
    lambda(BaseApp*) #1
}
, void > (render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
              const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    undefined8 uVar1;

    uVar1 = *(undefined8*)((long)param_1 + 8);
    *(undefined8*)param_2 = *(undefined8*)param_1;
    *(undefined8*)((long)param_2 + 8) = uVar1;
}

// 0x100c50250, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}, void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(void*, BaseApp*) #1
}
(BaseApp*)#1
},void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)const::{
    lambda(void*, BaseApp*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, BaseApp*) #1
}
::BaseApp__(void* param_1, BaseApp* param_2) {
    function < render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
                   const ::{
        lambda(BaseApp*) #1
    }
    , void > (render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100c50260, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}, void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const::{lambda(BaseApp*)#1},
   void>(render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const::{lambda(BaseApp*)#1}&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&) const ::{
    lambda(BaseApp*) #1
}
, void > (render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
              const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::operator()(void* param_1, BaseApp * param_2) {
    const ::{
        lambda(BaseApp*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100c502c0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}, void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(void*) #1
}
(BaseApp*)#1
},void>(render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)const::{
    lambda(void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100c502d0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100c99460, 16 bytes, complete-object constructor, inline, placed by class header (inline)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&): jumps straight to the base-object constructor

// 0x100c99600, 96 bytes, inline, placed by class header (inline)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::operator=(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::TEMPNAMEPLACEHOLDERVALUE(function<void
   (BaseApp*), 128ul, 16ul, (Methods)0> const&) */

function<void(BaseApp*), 128ul, 16ul, (Methods)0>*
function<void(BaseApp*), 128ul, 16ul, (Methods)0>::operator=(function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this,
                                                             function* param_1) {
    clean(this);
    *(long*)this = param_1->field_0;
    *(undefined8*)(this + 144) = *(undefined8*)&param_1->field_144;
    *(undefined8*)(this + 152) = *(undefined8*)&param_1->field_152;
    if (operator_cast_to_bool()) {
        copy((function<void(BaseApp*), 128ul, 16ul, (Methods)0>*)param_1, this + 16);
    }
    return this;
}

// 0x100c9a1a0, 64 bytes, base-object constructor, inline, placed by class header (inline)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
    BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::__0, void>(
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __0* param_1) {
    undefined8 uVar1;

    *(undefined8*)this = 0;
    uVar1 = *(undefined8*)(param_1 + 8);
    *(undefined8*)(this + 16) = *(undefined8*)param_1;
    *(undefined8*)(this + 24) = uVar1;
    *(code**)(this + 144) =
        function<BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0,
                 void>(
            (function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)->RunSynchronousMainThreadEvent()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this =
        function<BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0,
                 void>(
            (function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)->RunSynchronousMainThreadEvent()::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__;
    *(code**)(this + 152) =
        function<BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0,
                 void>(
            (function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)->RunSynchronousMainThreadEvent()::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100c9a2b0, 48 bytes, inline, placed by class header (inline)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::clean()
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::clean(function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this) {
    if (operator_cast_to_bool()) {
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::destruct(
            (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>*)this);
        *(undefined8*)this = 0;
    }
}

} // namespace jag::fixedfunction

namespace jag {
    template <typename...> // 1 instantiations, e.g. <render::DeferredFrameData>
    class MultiBuffer {
    public:
        MultiBuffer();
    };

    // 0x100c3e7d0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // MultiBuffer<render::DeferredFrameData>::MultiBuffer()
    void MultiBuffer<render::DeferredFrameData>::MultiBuffer() {
        *(undefined**)this = PTR_vtable_100ee6fd8 + 16;
    }

    // 0x100c3e800, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<DefaultBarrierCompletionFunction>::BarrierWithCompletion(unsigned long, DefaultBarrierCompletionFunction): jumps straight to the base-object constructor

    // 0x100c3eb90, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<DefaultBarrierCompletionFunction>::BarrierWithCompletion(unsigned long, DefaultBarrierCompletionFunction)
    void BarrierWithCompletion<DefaultBarrierCompletionFunction>::BarrierWithCompletion(undefined8 param_1) {
        new (this) std::mutex();
        new ((this + 64)) std::condition_variable();
        *(undefined8*)(this + 112) = param_1;
        *(undefined8*)(this + 120) = param_1;
        *(undefined8*)(this + 128) = 0;
        *(undefined8*)(this + 144) = 0;
    }

    // 0x100c3ec40, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<DefaultBarrierCompletionFunction>::~BarrierWithCompletion(): jumps straight to the base-object destructor

    // 0x100c3ec50, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<DefaultBarrierCompletionFunction>::~BarrierWithCompletion()
    void BarrierWithCompletion<DefaultBarrierCompletionFunction>::~BarrierWithCompletion() {
        ForceOpen(this);
        ((this + 64))->~condition_variable();
        ~mutex();
    }

    // 0x100c3ecb0, 128 bytes, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<DefaultBarrierCompletionFunction>::Wait()
    void BarrierWithCompletion<DefaultBarrierCompletionFunction>::Wait() {
        unique_lock<std::mutex> local_30[16];
        undefined8 local_20;

        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)this);
        if (WaitInner(this, (unique_lock*)local_30) == '\0') {
            *(long*)(this + 120) = *(long*)(this + 120) + -1;
            local_20 = *(undefined8*)(this + 128);
            std::condition_variable::wait<BarrierWithCompletion<DefaultBarrierCompletionFunction>::Wait()::_lambda()
                                              _1_>(this + 64, local_30, &local_20, this);
        }
        std::unique_lock<std::mutex>::~unique_lock(local_30);
    }

    // 0x100c3ed30, 96 bytes, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<DefaultBarrierCompletionFunction>::WaitInner(std::unique_lock<std::mutex>&)
    /* BarrierWithCompletion<DefaultBarrierCompletionFunction>::WaitInner(std::unique_lock<std::mutex>&)
    */

    bool BarrierWithCompletion<DefaultBarrierCompletionFunction>::WaitInner(unique_lock* param_1) {
        long lVar1;

        lVar1 = *(long*)(this + 120);
        if (lVar1 == 1) {
            *(long*)(this + 128) = *(long*)(this + 128) + 1;
            *(undefined8*)(this + 120) = *(undefined8*)(this + 112);
            ((this + 136))->~AutoSingleton();
            param_1->unlock();
            std::condition_variable::notify_all();
        }
        return lVar1 == 1;
    }

} // namespace jag

namespace jag::render {
    class KeepAliveSharedPtrAndOwner {
    public:
        bool operator==(KeepAliveSharedPtrAndOwner const&) const;
        ~KeepAliveSharedPtrAndOwner();
        KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner&&);
        KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner const&);
        bool operator==(void const*) const;

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        undefined8 field_8;  // offset 8
        undefined4 field_16; // offset 16
        char _unknown_20[4];
    };

    // 0x100c3eb00, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DeferredFrameData::~DeferredFrameData(): jumps straight to the base-object destructor

    // 0x100c3eb10, 128 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DeferredFrameData::~DeferredFrameData()
    void DeferredFrameData::~DeferredFrameData() {
        (&field_368)->~hash_set();
        (&field_312)->~hash_set();
        (&field_272)->~VectorFastPool();
        (&field_232)->~VectorFastPool();
        (&field_192)->~VectorFastPool();
        (&field_152)->~VectorFastPool();
        field_144->~SyncFence();
        (&field_112)->~vector();
        (&field_80)->~vector();
        ~LinearAllocator();
    }

    // 0x100c3f830, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DeferredRenderFunction::DeferredRenderFunction(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&): jumps straight to the base-object constructor

    // 0x100c3f960, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DeferredRenderFunction::DeferredRenderFunction(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    /* DeferredRenderFunction::DeferredRenderFunction(DeferredRenderFunction&&)
    */

    void DeferredRenderFunction::DeferredRenderFunction(DeferredRenderFunction* param_1) {
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)this, (function*)param_1);
    }

    // 0x100c50070, 32 bytes, inline, placed by debug map only (low confidence)
    // KeepAliveSharedPtrAndOwner::operator==(void const*) const
    /* KeepAliveSharedPtrAndOwner::TEMPNAMEPLACEHOLDERVALUE(void const*) const */

    bool KeepAliveSharedPtrAndOwner::operator==(void* param_1) {
        void* pvVar1;

        pvVar1 = (void*)end();
        return pvVar1 == param_1;
    }

} // namespace jag::render
