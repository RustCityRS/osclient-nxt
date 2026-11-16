// libs/jtl/multibuffer/MultiBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::fixedfunction {
    template <
        typename...> // 7 instantiations, e.g. <bool (unsigned int), 64ul, 16ul, (Methods)0>, <void (), 64ul, 16ul, (Methods)0>, <void (int, StringView), 64ul, 16ul, (Methods)0>
    class function {
    public:
        ~function();
        bool allocated() const;
        void destruct();
        function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
            oldscape::OSClientConsole::OnFocusChanged()::$_1&& arg1);
        function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&& arg1);
        function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(
            oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&& arg1);
        function < oldscape::input::InputForm::SetText(eastl::string const&, int)::{
            lambda(BaseApp*) #1
        }
        , void > (oldscape::input::InputForm::SetText(eastl::string const&, int)::{ lambda(BaseApp*) #1 } && arg1);
        function < oldscape::input::InputForm::ShowKeyboard(int)::{
            lambda(BaseApp*) #1
        }
        , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 } && arg1);
        function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(
            oldscape::rs2lib::InputField::SetFocus(bool)::$_0&& arg1);
        function < oldscape::input::InputForm::Close()::{
            lambda(BaseApp*) #1
        }
        , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 } && arg1);
        function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&& arg1);
        void operator()<unsigned int&, game::CutscenePlaybackEndReason&>(
            unsigned int& arg1, game::CutscenePlaybackEndReason& cutscenePlaybackEndReason);
        function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(
            game::BuildTerrainMain::LoadMaterials()::$_0&& arg1);
        function(const function<void(), 64ul, 16ul, (Methods)0>& callback);
        function<void(), 64ul, 16ul, (Methods)0>* operator=(const function<void(), 64ul, 16ul, (Methods)0>& callback);
        void clean();
        void copy(void* arg1) const;
        function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
            ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&& arg1);
        function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(
            ui::InputField::AddCharacter(unsigned int, bool)::$_51& arg1);
        function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
            ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52& arg1);
        function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
            ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&& arg1);
        function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
            ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&& arg1);
        function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                     graphics::RT7Core*)::$_4::operator()() const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()
                      const ::{ lambda(render::RenderContext&) #1 } &&
                  arg1);
        function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                     graphics::RT7Core*)::$_5::operator()() const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()
                      const ::{ lambda(render::RenderContext&) #1 } &&
                  arg1);
        function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                       eastl::fixed_vector<StringView, 4ul> const&) const ::{
            lambda(BaseApp*) #1
        }
        , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                      eastl::fixed_vector<StringView, 4ul> const&) const ::{ lambda(BaseApp*) #1 } &&
                  arg1);
        function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                       graphics::EffectManager&, graphics::SceneViewData const&,
                                                       graphics::DrawableQueue&)::$_0,
                 void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                             graphics::EffectManager&, graphics::SceneViewData const&,
                                                             graphics::DrawableQueue&)::$_0&& arg1);
        function<
            graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                                 eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                                 shared_ptr<graphics::TextureAtlasReference> const&,
                                                 eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                       eastl::hash<int>, eastl::equal_to<int>, false>&,
                                                 math::Matrix44T<float> const*, float const*)::$_8,
            void>(
            graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                                 eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                                 shared_ptr<graphics::TextureAtlasReference> const&,
                                                 eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                       eastl::hash<int>, eastl::equal_to<int>, false>&,
                                                 math::Matrix44T<float> const*, float const*)::$_8&& arg1);
        function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(
            graphics::Model::ConstructFinishAndUpload()::$_2&& arg1);
        function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(
            graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&& arg1);
        function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
            graphics::TextureAtlas::UploadDelayedMaterials()::$_1&& arg1);
        function<graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                         WrapArray<graphics::MaterialInfo const> const&)::$_5,
                 void>(
            graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                    WrapArray<graphics::MaterialInfo const> const&)::$_5&& arg1);
        function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
            graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&& arg1);
        function<
            graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
            void>(graphics::PointLightGridTexture::UpdateTexture(
            shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&& arg1);
        function<graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1,
                 void>(graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long,
                                                           unsigned long)::$_1&& arg1);
        bool operator()<unsigned int&>(unsigned int& arg1) const;
        function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
            graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&& arg1);
        function <
            DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
              lambda(render::RenderContext&) #1
          } && arg1);
        function <
            DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&)
                      const ::{ lambda(render::RenderContext&) #1 } &&
                  arg1);
        function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
            graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&& arg1);
        void operator()<>();
        function<std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
            std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&& bind);
        void operator()<GraphicsApp*>(GraphicsApp*&& arg1);
        function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
            GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&& arg1);
        function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
            GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&& arg1);
        function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
            graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&& arg1);
        function<render::VAOManager::DestroyRenderingResources()::$_3, void>(
            render::VAOManager::DestroyRenderingResources()::$_3&& arg1);
        function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&& arg1);
        function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           render::Format, void const*)::$_6,
                 void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                 render::Format, void const*)::$_6&& arg1);
        function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           render::Format, void const*)::$_7,
                 void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                 render::Format, void const*)::$_7&& arg1);
        function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           unsigned int, unsigned int, render::Format, void const*)::$_8,
                 void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                 unsigned int, unsigned int, render::Format, void const*)::$_8&& arg1);
        function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, render::Format, void const*)::$_9,
                 void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int,
                                                   unsigned int, unsigned int, render::Format,
                                                   void const*)::$_9&& arg1);
        function<render::TextureRenderBuffer::Destroy()::$_10, void>(
            render::TextureRenderBuffer::Destroy()::$_10&& arg1);
        function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
            render::Texture::ReleaseNativeResources(char const*)::$_11&& arg1);
        function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&& arg1);
        function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&& arg1);
        function<render::Query::Create(render::QueryType)::$_14, void>(
            render::Query::Create(render::QueryType)::$_14&& arg1);
        function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&& arg1);
        function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&& arg1);
        function<render::Query::End()::$_17, void>(render::Query::End()::$_17&& arg1);
        function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&& arg1);
        function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&& arg1);
        function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&& arg1);
        function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&& arg1);
        function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                             render::Format, void const*)::$_6::operator()(BaseApp*) const ::{
            lambda(render::RenderContext&) #1
        }
        , void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                            render::Format, void const*)::$_6::operator()(BaseApp*) const ::{
              lambda(render::RenderContext&) #1
          } && arg1);
        function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&& arg1);
        function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(
            render::BufferedRenderTargets::WriteFinished()::$_3&& arg1);
        function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
            render::RenderTargets::Create(char const*, unsigned int)::$_4&& arg1);
        function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
            render::RenderTargets::Create(char const*, unsigned int)::$_5&& arg1);
        function<render::RenderTargets::Create(char const*, render::TextureType,
                                               std::array<render::Texture::Desc, 2ul> const&, int,
                                               render::Texture::Desc const&, unsigned int)::$_6,
                 void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                     std::array<render::Texture::Desc, 2ul> const&, int,
                                                     render::Texture::Desc const&, unsigned int)::$_6&& arg1);
        function<render::RenderTargets::Create(char const*, render::TextureType,
                                               std::array<render::Texture::Desc, 2ul> const&, int,
                                               render::Texture::Desc const&, unsigned int)::$_7,
                 void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                     std::array<render::Texture::Desc, 2ul> const&, int,
                                                     render::Texture::Desc const&, unsigned int)::$_7&& arg1);
        function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
            render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&& arg1);
        function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
            render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&& arg1);
        function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
            render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&& arg1);
        function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int,
                                                                 int, render::CubeFace)::$_11,
                 void>(render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul> const&, int, int, render::CubeFace)::$_11&& arg1);
        function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
            render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&& arg1);
        function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&& arg1);
        function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
            render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&& arg1);
        function<render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate()
                                                                             const ::$_15&& arg1);
        function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                              unsigned int) const ::$_17,
                 void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                                    unsigned int) const ::$_17&& arg1);
        function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                              unsigned int) const ::$_18,
                 void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                                    unsigned int) const ::$_18&& arg1);
        function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                              unsigned int) const ::$_19,
                 void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                                    unsigned int) const ::$_19&& arg1);
        function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                     const ::$_20,
                 void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                           const ::$_20&& arg1);
        function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                     const ::$_21,
                 void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
                                                                       unsigned int) const ::$_21&& arg1);
        function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
            render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&& arg1);
        function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
            render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&& arg1);
        function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                     const ::$_24,
                 void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                           const ::$_24&& arg1);
        function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
            render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&& arg1);
        function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
            render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&& arg1);
        function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
            render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&& arg1);
        function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
            render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&& arg1);
        function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                     const ::$_29,
                 void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
                                                                       unsigned int) const ::$_29&& arg1);
        function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
            render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&& arg1);
        function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
            render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&& arg1);
        function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                              unsigned int) const ::$_32,
                 void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                                    unsigned int) const ::$_32&& arg1);
        function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                     const ::$_33,
                 void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                           const ::$_33&& arg1);
        function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                     const ::$_34,
                 void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                           const ::$_34&& arg1);
        function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
            render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&& arg1);
        function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
            render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&& arg1);
        function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
            render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&& arg1);
        function<render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
            render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&& arg1);
        function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
            render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&& arg1);
        function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
            render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&& arg1);
        function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
            render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&& arg1);
        function<render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
            render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&& arg1);
        function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&& arg1);
        function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
            render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&& arg1);
        function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                       unsigned int, void const*, render::UpdateType)::$_1,
                 void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, void const*,
                                                             render::UpdateType)::$_1&& arg1);
        function<render::RenderContext::RunSynchronouslyOnRenderThread(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
                 void>(render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&& arg1);
        function<render::RenderContext::FinishRendering()::$_78, void>(
            render::RenderContext::FinishRendering()::$_78&& arg1);
        function<render::RenderContext::FinishRendering()::$_79, void>(
            render::RenderContext::FinishRendering()::$_79&& arg1);
        function<render::RenderContext::FinishRendering()::$_80, void>(
            render::RenderContext::FinishRendering()::$_80&& arg1);
        function<render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&& arg1);
        function<render::RenderContext::ResetDeferredFrames()::$_94, void>(
            render::RenderContext::ResetDeferredFrames()::$_94&& arg1);
        function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
            render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&& arg1);
        function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
            render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&& arg1);
        function(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const& callback);
        function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
            render::RenderDevice::TriggerDeviceLoss()::$_114&& arg1);
        function<render::RenderContext::BeginInternal(bool)::$_4, void>(
            render::RenderContext::BeginInternal(bool)::$_4&& arg1);
        function<render::RenderContext::BeginInternal(bool)::$_5, void>(
            render::RenderContext::BeginInternal(bool)::$_5&& arg1);
        function<render::RenderContext::BeginInternal(bool)::$_6, void>(
            render::RenderContext::BeginInternal(bool)::$_6&& arg1);
        function<render::RenderContext::BeginInternal(bool)::$_7, void>(
            render::RenderContext::BeginInternal(bool)::$_7&& arg1);
        function<render::RenderContext::BeginInternal(bool)::$_8, void>(
            render::RenderContext::BeginInternal(bool)::$_8&& arg1);
        function<render::RenderContext::BeginInternal(bool)::$_9, void>(
            render::RenderContext::BeginInternal(bool)::$_9&& arg1);
        function<render::RenderContext::BeginInternal(bool)::$_10, void>(
            render::RenderContext::BeginInternal(bool)::$_10&& arg1);
        function<render::RenderContext::BeginInternal(bool)::$_11, void>(
            render::RenderContext::BeginInternal(bool)::$_11&& arg1);
        function<render::RenderContext::EndInternal(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
                 void>(render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&& arg1);
        function<render::RenderContext::EndInternal(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
                 void>(render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&& arg1);
        function<render::RenderContext::EndInternal(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
                 void>(render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&& arg1);
        function<render::RenderContext::EndInternal(
                     function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
                 void>(render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&& arg1);
        function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&& arg1);
        function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&& arg1);
        function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
            render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&& arg1);
        function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
            render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&& arg1);
        function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
            render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&& arg1);
        function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
            render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&& arg1);
        function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
            render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&& arg1);
        function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
            render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&& arg1);
        function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
            render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&& arg1);
        function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
            render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&& arg1);
        function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
            render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&& arg1);
        function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
            render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&& arg1);
        function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
            render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&& arg1);
        function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
            render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&& arg1);
        function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
            render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&& arg1);
        function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
            render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&& arg1);
        function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
            render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&& arg1);
        function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
            render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&& arg1);
        function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                           unsigned long)::$_36,
                 void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                                 math::Vector4T<float> const*,
                                                                 unsigned long)::$_36&& arg1);
        function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                           unsigned long)::$_37,
                 void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                                 math::Vector4T<float> const*,
                                                                 unsigned long)::$_37&& arg1);
        function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
            render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&& arg1);
        function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
            render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&& arg1);
        function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                unsigned int)::$_40,
                 void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                      unsigned int)::$_40&& arg1);
        function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                unsigned int)::$_41,
                 void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                      unsigned int)::$_41&& arg1);
        function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
            render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&& arg1);
        function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
            render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&& arg1);
        function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                         unsigned int const*, unsigned int const*)::$_44,
                 void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                               unsigned int const*, unsigned int const*)::$_44&& arg1);
        function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                         unsigned int const*, unsigned int const*)::$_45,
                 void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                               unsigned int const*, unsigned int const*)::$_45&& arg1);
        function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46,
                 void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                              unsigned int)::$_46&& arg1);
        function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47,
                 void>(render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                              unsigned int)::$_47&& arg1);
        function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
            render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&& arg1);
        function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
            render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&& arg1);
        function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
            render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&& arg1);
        function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
            render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&& arg1);
        function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                render::SamplerState const*, bool)::$_52,
                 void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*,
                                                                      unsigned int, render::SamplerState const*,
                                                                      bool)::$_52&& arg1);
        function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                render::SamplerState const*, bool)::$_53,
                 void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*,
                                                                      unsigned int, render::SamplerState const*,
                                                                      bool)::$_53&& arg1);
        function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                render::SamplerState const*, bool)::$_54,
                 void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                      render::SamplerState const*, bool)::$_54&& arg1);
        function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                render::SamplerState const*, bool)::$_55,
                 void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                      render::SamplerState const*, bool)::$_55&& arg1);
        function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56,
                 void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int,
                                                                     render::ShaderConstBuffer const*)::$_56&& arg1);
        function<render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57,
                 void>(render::RenderContext::SetVSShaderConstBuffer(unsigned int,
                                                                     render::ShaderConstBuffer const*)::$_57&& arg1);
        function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58,
                 void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int,
                                                                     render::ShaderConstBuffer const*)::$_58&& arg1);
        function<render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59,
                 void>(render::RenderContext::SetPSShaderConstBuffer(unsigned int,
                                                                     render::ShaderConstBuffer const*)::$_59&& arg1);
        function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
            render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&& arg1);
        function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
            render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&& arg1);
        function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
            render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&& arg1);
        function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
            render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&& arg1);
        function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
            render::RenderContext::SetBlendState(render::BlendState const*)::$_64&& arg1);
        function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
            render::RenderContext::SetBlendState(render::BlendState const*)::$_65&& arg1);
        function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
            render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&& arg1);
        function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
            render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&& arg1);
        function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                            int const*)::$_68,
                 void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                  int const*)::$_68&& arg1);
        function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                            int const*)::$_69,
                 void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                  int const*)::$_69&& arg1);
        function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                              render::IndexType)::$_70,
                 void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                                    render::IndexType)::$_70&& arg1);
        function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                              render::IndexType)::$_71,
                 void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                                    render::IndexType)::$_71&& arg1);
        function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                   void const* const*, render::IndexType)::$_72,
                 void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                         int const*, void const* const*,
                                                                         render::IndexType)::$_72&& arg1);
        function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                   void const* const*, render::IndexType)::$_73,
                 void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                         int const*, void const* const*,
                                                                         render::IndexType)::$_73&& arg1);
        function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
            render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&& arg1);
        function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
            render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&& arg1);
        function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
            render::RenderContext::MemoryBarrier(unsigned int)::$_76&& arg1);
        function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
            render::RenderContext::MemoryBarrier(unsigned int)::$_77&& arg1);
        function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, unsigned int, render::CubeFace)::$_81,
                 void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, unsigned int,
                                                                   render::CubeFace)::$_81&& arg1);
        function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, unsigned int, render::CubeFace)::$_82,
                 void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, unsigned int,
                                                                   render::CubeFace)::$_82&& arg1);
        function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                math::Rect<unsigned int> const&,
                                                                math::Rect<unsigned int> const&)::$_83,
                 void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                      math::Rect<unsigned int> const&,
                                                                      math::Rect<unsigned int> const&)::$_83&& arg1);
        function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                math::Rect<unsigned int> const&,
                                                                math::Rect<unsigned int> const&)::$_84,
                 void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                      math::Rect<unsigned int> const&,
                                                                      math::Rect<unsigned int> const&)::$_84&& arg1);
        function<render::RenderContext::FlushTextureCache()::$_85, void>(
            render::RenderContext::FlushTextureCache()::$_85&& arg1);
        function<render::RenderContext::FlushTextureCache()::$_86, void>(
            render::RenderContext::FlushTextureCache()::$_86&& arg1);
        function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
            render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&& arg1);
        function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
            render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&& arg1);
        function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
            render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&& arg1);
        function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
            render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&& arg1);
        function < render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
            lambda(BaseApp*) #1
        }
        , void > (render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
              lambda(BaseApp*) #1
          } && arg1);
        // ... 8 more instantiated members

    private:
        long field_0;
        uint8_t _unknown_8[152];
    };

    // 0x10000b580
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::~function() {
        if (operator_cast_to_bool() != '\0') {
            destruct(this);
        }
    }

    // 0x10000b5b0
    bool function<void(BaseApp*), 128ul, 16ul, (Methods)0>::allocated() const {
        return field_0 != 0;
    }

    // 0x10000b5c0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::destruct() {
        (**(void (**)(...))(this + 152))(this + 16);
    }

    // 0x10007e1e0
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&& arg1) {
        *(uint64_t*)this = 0;
        *(__1*)(this + 16) = arg1;
        *(void (**)(...))(this + 144) = function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
            oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
            oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(void (**)(...))(this + 152) = function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
            oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{lambda(void*) #1} ::__invoke;
    }

    // 0x100218a70
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0,
                                                                void>(
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0&& arg1) {
        *(uint64_t*)this = 0;
        *(InputField**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(bool->SetFocus()::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(bool->SetFocus()::$_0&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(void (**)(...))(this + 152) = function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(
            bool->SetFocus()::$_0&&)::{lambda(void*) #1} ::__invoke;
    }

    // 0x100396c20
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 } && arg1) {
        _lambda_void__void___1_ local_28;
        _lambda_void__jag__BaseApp___1_ local_20;
        _lambda_void___1_ local_18;

        *(uint64_t*)this = 0;
        uint64_t uVar1 =
            fixedfunction::function::function(oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, void*) #1
        }
        ::operator_cast_to_function_pointer(&local_28);
        *(uint64_t*)(this + 144) = uVar1;
        uVar1 = fixedfunction::function::function(oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator_cast_to_function_pointer(&local_20);
        *(uint64_t*)this = uVar1;
        uVar1 = fixedfunction::function::function(oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*) #1
        }
        ::operator_cast_to_function_pointer(&local_18);
        *(uint64_t*)(this + 152) = uVar1;
    }

    // 0x10086ff90
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)&arg1.field_8;
        uint64_t uVar2 = *(uint64_t*)(arg1.field_12 + 4);
        uint64_t uVar3 = *(uint64_t*)(arg1.field_12 + 12);
        uint64_t uVar4 = *(uint64_t*)(arg1.field_12 + 20);
        uint64_t uVar5 = *(uint64_t*)(arg1.field_12 + 28);
        uint64_t uVar6 = *(uint64_t*)(arg1.field_12 + 36);
        uint64_t uVar7 = *(uint64_t*)(arg1.field_12 + 44);
        *(TextureAtlas**)(this + 16) = arg1.field_0;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(uint64_t*)(this + 64) = uVar6;
        *(uint64_t*)(this + 72) = uVar7;
        *(TextureAtlas**)(this + 80) = arg1[1].field_0;
        *(void (**)(...))(this + 144) = function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
            graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
            graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
            graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{lambda(void*) #1} ::__invoke;
    }

    // 0x1008715a0
    function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                WrapArray<graphics::MaterialInfo const> const&)::$_5,
        void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                      WrapArray<graphics::MaterialInfo const> const&)::$_5&& arg1) {
        *(void (**)(...))(this + 80) =
            function<graphics::TextureAtlas::GetTextureSlots(
                         eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                         WrapArray<graphics::MaterialInfo const> const&)::$_5,
                     void>((eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*)
                               ->GetTextureSlots(WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<graphics::TextureAtlas::GetTextureSlots(
                         eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                         WrapArray<graphics::MaterialInfo const> const&)::$_5,
                     void>((eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*)
                               ->GetTextureSlots(WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{
            lambda(void*, graphicutils::TextureAtlasSlot const&) #1
        }
        ::TextureAtlasSlot_const__;
        *(void (**)(...))(this + 88) =
            function<graphics::TextureAtlas::GetTextureSlots(
                         eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                         WrapArray<graphics::MaterialInfo const> const&)::$_5,
                     void>((eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*)
                               ->GetTextureSlots(WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{
                lambda(void*) #1} ::__invoke;
    }

    // 0x100871650
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&& arg1) {
        *(uint64_t*)this = 0;
        int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8::__8((__8*)(this + 16), (__8*)arg1);
        *(void (**)(...))(this + 144) =
            function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
                int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
                int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
                int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10098a650
    void function<void(), 64ul, 16ul, (Methods)0>::operator()<>() {
        (**(void (**)(...))this)(this + 16);
    }

    // 0x100a452d0
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&& bind) {
        function<std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(this, bind);
    }

    // 0x100bc03b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) = function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
            int->ReadBackbuffer(int, int)::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
            int->ReadBackbuffer(int, int)::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
            int->ReadBackbuffer(int, int)::$_0&&)::{lambda(void*) #1} ::__invoke;
    }

    // 0x100c3f530
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = *(uint64_t*)(arg1 + 32);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::RunSynchronouslyOnRenderThread(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
                     void>((function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
                               ->RunSynchronouslyOnRenderThread(bool)::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::RunSynchronouslyOnRenderThread(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
                     void>((function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
                               ->RunSynchronouslyOnRenderThread(bool)::$_3&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::RunSynchronouslyOnRenderThread(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
                     void>((function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
                               ->RunSynchronouslyOnRenderThread(bool)::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c3f580
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c3f590
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c3f5b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c3f5c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->RunSynchronouslyOnRenderThread(bool)::$_3::operator()((__3*)this, arg1);
    }

    // 0x100c3f670
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::RunSynchronouslyOnRenderThread(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3,
        void>(render::RenderContext::RunSynchronouslyOnRenderThread(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&, bool)::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c400e0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_4, void>(bool->BeginInternal()::$_4&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BeginInternal(bool)::$_4, void>(bool->BeginInternal()::$_4&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_4, void>(bool->BeginInternal()::$_4&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40120
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c40130
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c40140
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c40150
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->BeginInternal()::$_4::operator()((__4*)this, arg1);
    }

    // 0x100c40180
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_4, void>(render::RenderContext::BeginInternal(bool)::$_4&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c402f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_5, void>(bool->BeginInternal()::$_5&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BeginInternal(bool)::$_5, void>(bool->BeginInternal()::$_5&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_5, void>(bool->BeginInternal()::$_5&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40330
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c40340
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c40350
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c40360
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->BeginInternal()::$_5::operator()((__5*)this, arg1);
    }

    // 0x100c40390
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_5, void>(render::RenderContext::BeginInternal(bool)::$_5&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c40500
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_6, void>(bool->BeginInternal()::$_6&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BeginInternal(bool)::$_6, void>(bool->BeginInternal()::$_6&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_6, void>(bool->BeginInternal()::$_6&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40540
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c40550
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c40560
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c40570
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->BeginInternal()::$_6::operator()((__6*)this, arg1);
    }

    // 0x100c405a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_6, void>(render::RenderContext::BeginInternal(bool)::$_6&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c40710
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_7, void>(bool->BeginInternal()::$_7&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BeginInternal(bool)::$_7, void>(bool->BeginInternal()::$_7&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_7, void>(bool->BeginInternal()::$_7&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40750
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c40760
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c40770
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c40780
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->BeginInternal()::$_7::operator()((__7*)this, arg1);
    }

    // 0x100c407b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_7, void>(render::RenderContext::BeginInternal(bool)::$_7&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c40a20
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_8, void>(bool->BeginInternal()::$_8&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BeginInternal(bool)::$_8, void>(bool->BeginInternal()::$_8&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_8, void>(bool->BeginInternal()::$_8&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40a60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c40a70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c40a80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c40a90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->BeginInternal()::$_8::operator()((__8*)this, arg1);
    }

    // 0x100c40ad0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_8, void>(render::RenderContext::BeginInternal(bool)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c40c40
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_9, void>(bool->BeginInternal()::$_9&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BeginInternal(bool)::$_9, void>(bool->BeginInternal()::$_9&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_9, void>(bool->BeginInternal()::$_9&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40c80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c40c90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c40ca0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c40cb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->BeginInternal()::$_9::operator()((__9*)this, arg1);
    }

    // 0x100c40cf0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_9, void>(render::RenderContext::BeginInternal(bool)::$_9&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c40e60
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(
        render::RenderContext::BeginInternal(bool)::$_10&& arg1) {
        *(uint64_t*)this = 0;
        *(RenderContext**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_10, void>(bool->BeginInternal()::$_10&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BeginInternal(bool)::$_10, void>(bool->BeginInternal()::$_10&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_10, void>(bool->BeginInternal()::$_10&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c40ea0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c40eb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c40ec0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c40ed0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->BeginInternal()::$_10::operator()((__10*)this, arg1);
    }

    // 0x100c40ef0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_10, void>(render::RenderContext::BeginInternal(bool)::$_10&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c41060
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(
        render::RenderContext::BeginInternal(bool)::$_11&& arg1) {
        *(uint64_t*)this = 0;
        *(RenderContext**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BeginInternal(bool)::$_11, void>(bool->BeginInternal()::$_11&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BeginInternal(bool)::$_11, void>(bool->BeginInternal()::$_11&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BeginInternal(bool)::$_11, void>(bool->BeginInternal()::$_11&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c410a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c410b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c410c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c410d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->BeginInternal()::$_11::operator()((__11*)this, arg1);
    }

    // 0x100c410f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BeginInternal(bool)::$_11, void>(render::RenderContext::BeginInternal(bool)::$_11&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c413d0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_13&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_13&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_13&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41410
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c41420
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c41430
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c41440
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->EndInternal()::$_13::operator()((__13*)this, arg1);
    }

    // 0x100c41470
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_13&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c415e0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_14&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_14&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_14&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41620
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c41630
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c41640
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c41650
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->EndInternal()::$_14::operator()((__14*)this, arg1);
    }

    // 0x100c41680
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_14&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c417f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_15&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_15&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_15&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41830
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c41840
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c41850
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c41860
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->EndInternal()::$_15::operator()((__15*)this, arg1);
    }

    // 0x100c41a00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_15&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c41b70
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_16&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_16&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::EndInternal(
                         function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
                     void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)->EndInternal()::$_16&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41bb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c41bc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c41bd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c41be0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
            ->EndInternal()::$_16::operator()((__16*)this, arg1);
    }

    // 0x100c41d00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::EndInternal(
            function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16,
        void>(render::RenderContext::EndInternal(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const&)::$_16&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c41e80
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c41ec0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c41ed0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c41ee0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c41ef0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::Present()::$_18::operator()((__18*)this, arg1);
    }

    // 0x100c41f20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_18, void>(render::RenderContext::Present()::$_18&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c42090
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c420d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c420e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c420f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c42100
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::Present()::$_19::operator()((__19*)this, arg1);
    }

    // 0x100c42130
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::Present()::$_19, void>(render::RenderContext::Present()::$_19&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c422a0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
                (render::InputAssemblerState const*)->SetInputAssemblerState()::$_20&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
                (render::InputAssemblerState const*)->SetInputAssemblerState()::$_20&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
                (render::InputAssemblerState const*)->SetInputAssemblerState()::$_20&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c422e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c422f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c42300
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c42310
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::InputAssemblerState const*)->SetInputAssemblerState()::$_20::operator()((__20*)this, arg1);
    }

    // 0x100c42340
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_20&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c424b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
                (render::InputAssemblerState const*)->SetInputAssemblerState()::$_21&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
                (render::InputAssemblerState const*)->SetInputAssemblerState()::$_21&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
                (render::InputAssemblerState const*)->SetInputAssemblerState()::$_21&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c424f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c42500
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c42510
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c42520
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::InputAssemblerState const*)->SetInputAssemblerState()::$_21::operator()((__21*)this, arg1);
    }

    // 0x100c42550
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21, void>(
        render::RenderContext::SetInputAssemblerState(render::InputAssemblerState const*)::$_21&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c426c0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&& arg1) {
        *(uint64_t*)this = 0;
        (render::DrawCallState&)->BindDrawCallState()::$_22::__22((__22*)(this + 16), (__22*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
                (render::DrawCallState&)->BindDrawCallState()::$_22&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_22&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
                (render::DrawCallState&)->BindDrawCallState()::$_22&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c42740
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c42750
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::DrawCallState&)->BindDrawCallState()::$_22::__22(arg1, (__22*)this);
    }

    // 0x100c427a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c427b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DrawCallState&)->BindDrawCallState()::$_22::operator()((__22*)this, arg1);
    }

    // 0x100c427e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c427f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_22&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (render::DrawCallState&)->BindDrawCallState()::$_22::~__22((__22*)this);
    }

    // 0x100c42960
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&& arg1) {
        *(uint64_t*)this = 0;
        (render::DrawCallState&)->BindDrawCallState()::$_23::__23((__23*)(this + 16), (__23*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
                (render::DrawCallState&)->BindDrawCallState()::$_23&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_23&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
                (render::DrawCallState&)->BindDrawCallState()::$_23&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c429e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c429f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::DrawCallState&)->BindDrawCallState()::$_23::__23(arg1, (__23*)this);
    }

    // 0x100c42a40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c42a50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DrawCallState&)->BindDrawCallState()::$_23::operator()((__23*)this, arg1);
    }

    // 0x100c42a80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c42a90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_23&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (render::DrawCallState&)->BindDrawCallState()::$_23::~__23((__23*)this);
    }

    // 0x100c44b90
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&& arg1) {
        *(uint64_t*)this = 0;
        (render::DrawCallState&)->BindDrawCallState()::$_24::__24((__24*)(this + 16), (__24*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
                (render::DrawCallState&)->BindDrawCallState()::$_24&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_24&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
                (render::DrawCallState&)->BindDrawCallState()::$_24&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c44c10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c44c20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::DrawCallState&)->BindDrawCallState()::$_24::__24(arg1, (__24*)this);
    }

    // 0x100c44c70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c44c80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DrawCallState&)->BindDrawCallState()::$_24::operator()((__24*)this, arg1);
    }

    // 0x100c44cb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c44cc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_24&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (render::DrawCallState&)->BindDrawCallState()::$_24::~__24((__24*)this);
    }

    // 0x100c44e30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&& arg1) {
        *(uint64_t*)this = 0;
        (render::DrawCallState&)->BindDrawCallState()::$_25::__25((__25*)(this + 16), (__25*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
                (render::DrawCallState&)->BindDrawCallState()::$_25&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
            (render::DrawCallState&)->BindDrawCallState()::$_25&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
                (render::DrawCallState&)->BindDrawCallState()::$_25&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c44eb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c44ec0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::DrawCallState&)->BindDrawCallState()::$_25::__25(arg1, (__25*)this);
    }

    // 0x100c44f10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c44f20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DrawCallState&)->BindDrawCallState()::$_25::operator()((__25*)this, arg1);
    }

    // 0x100c44f50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c44f60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25, void>(
        render::RenderContext::BindDrawCallState(render::DrawCallState&)::$_25&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (render::DrawCallState&)->BindDrawCallState()::$_25::~__25((__25*)this);
    }

    // 0x100c450d0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&& arg1) {
        *(uint64_t*)this = 0;
        (render::DispatchCallState&)->BindDispatchCallState()::$_26::__26((__26*)(this + 16), (__26*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_26&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_26&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_26&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c45150
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c45160
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_26::__26(arg1, (__26*)this);
    }

    // 0x100c451b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c451c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_26::operator()((__26*)this, arg1);
    }

    // 0x100c451f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c45200
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_26&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_26::~__26((__26*)this);
    }

    // 0x100c45370
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&& arg1) {
        *(uint64_t*)this = 0;
        (render::DispatchCallState&)->BindDispatchCallState()::$_27::__27((__27*)(this + 16), (__27*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_27&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_27&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_27&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c453f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c45400
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_27::__27(arg1, (__27*)this);
    }

    // 0x100c45450
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c45460
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_27::operator()((__27*)this, arg1);
    }

    // 0x100c45490
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c454a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_27&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_27::~__27((__27*)this);
    }

    // 0x100c45cf0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&& arg1) {
        *(uint64_t*)this = 0;
        (render::DispatchCallState&)->BindDispatchCallState()::$_28::__28((__28*)(this + 16), (__28*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_28&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_28&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_28&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c45d70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c45d80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_28::__28(arg1, (__28*)this);
    }

    // 0x100c45dd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c45de0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_28::operator()((__28*)this, arg1);
    }

    // 0x100c45e10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c45e20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_28&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_28::~__28((__28*)this);
    }

    // 0x100c45f90
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&& arg1) {
        *(uint64_t*)this = 0;
        (render::DispatchCallState&)->BindDispatchCallState()::$_29::__29((__29*)(this + 16), (__29*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_29&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_29&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
                (render::DispatchCallState&)->BindDispatchCallState()::$_29&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46010
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c46020
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_29::__29(arg1, (__29*)this);
    }

    // 0x100c46070
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c46080
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_29::operator()((__29*)this, arg1);
    }

    // 0x100c460b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c460c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29, void>(
        render::RenderContext::BindDispatchCallState(render::DispatchCallState&)::$_29&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (render::DispatchCallState&)->BindDispatchCallState()::$_29::~__29((__29*)this);
    }

    // 0x100c46230
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&& arg1) {
        *(uint64_t*)this = 0;
        (render::Viewport const*)->SetViewports(unsigned long)::$_30::__30((__30*)(this + 16), (__30*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
                (render::Viewport const*)->SetViewports(unsigned long)::$_30&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
                (render::Viewport const*)->SetViewports(unsigned long)::$_30&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
                (render::Viewport const*)->SetViewports(unsigned long)::$_30&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c462c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c462d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::Viewport const*)->SetViewports(unsigned long)::$_30::__30(arg1, (__30*)this);
    }

    // 0x100c46330
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c46340
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::Viewport const*)->SetViewports(unsigned long)::$_30::operator()((__30*)this, arg1);
    }

    // 0x100c46380
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_30&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c464f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&& arg1) {
        *(uint64_t*)this = 0;
        (render::Viewport const*)->SetViewports(unsigned long)::$_31::__31((__31*)(this + 16), (__31*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
                (render::Viewport const*)->SetViewports(unsigned long)::$_31&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
                (render::Viewport const*)->SetViewports(unsigned long)::$_31&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
                (render::Viewport const*)->SetViewports(unsigned long)::$_31&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46580
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c46590
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::Viewport const*)->SetViewports(unsigned long)::$_31::__31(arg1, (__31*)this);
    }

    // 0x100c465f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c46600
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::Viewport const*)->SetViewports(unsigned long)::$_31::operator()((__31*)this, arg1);
    }

    // 0x100c46640
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31, void>(
        render::RenderContext::SetViewports(render::Viewport const*, unsigned long)::$_31&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c467b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_32&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_32&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_32&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46800
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c46810
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c46830
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c46840
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->SetScissorRectangle(int, int, int, int)::$_32::operator()((__32*)this, arg1);
    }

    // 0x100c46880
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c469f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_33&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_33&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
                bool->SetScissorRectangle(int, int, int, int)::$_33&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46a40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c46a50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c46a70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c46a80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        bool->SetScissorRectangle(int, int, int, int)::$_33::operator()((__33*)this, arg1);
    }

    // 0x100c46ac0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33, void>(
        render::RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c46c30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
                (render::RenderTargets const*)->SetRenderTargets()::$_34&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
                (render::RenderTargets const*)->SetRenderTargets()::$_34&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
                (render::RenderTargets const*)->SetRenderTargets()::$_34&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46c70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c46c80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c46c90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c46ca0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderTargets const*)->SetRenderTargets()::$_34::operator()((__34*)this, arg1);
    }

    // 0x100c46d00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_34&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c46e70
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
                (render::RenderTargets const*)->SetRenderTargets()::$_35&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
                (render::RenderTargets const*)->SetRenderTargets()::$_35&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
                (render::RenderTargets const*)->SetRenderTargets()::$_35&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c46eb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c46ec0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c46ed0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c46ee0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderTargets const*)->SetRenderTargets()::$_35::operator()((__35*)this, arg1);
    }

    // 0x100c46f40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35, void>(
        render::RenderContext::SetRenderTargets(render::RenderTargets const*)::$_35&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c470b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_36,
                     void>((render::RenderTargets const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_36&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_36,
                     void>((render::RenderTargets const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_36&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_36,
                     void>((render::RenderTargets const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_36&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47100
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c47110
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 40);
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        *(uint64_t*)((long)arg1 + 40) = uVar5;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c47130
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c47140
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderTargets const*)
            ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_36::operator()((__36*)this, arg1);
    }

    // 0x100c471b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_36,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_36&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c47320
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_37,
                     void>((render::RenderTargets const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_37&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_37,
                     void>((render::RenderTargets const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_37&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ClearRenderTargets(render::RenderTargets const*,
                                                               math::Vector4T<float> const*, unsigned long)::$_37,
                     void>((render::RenderTargets const*)
                               ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_37&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47370
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c47380
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 40);
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        *(uint64_t*)((long)arg1 + 40) = uVar5;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c473a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c473b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderTargets const*)
            ->ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_37::operator()((__37*)this, arg1);
    }

    // 0x100c47420
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                  unsigned long)::$_37,
        void>(render::RenderContext::ClearRenderTargets(render::RenderTargets const*, math::Vector4T<float> const*,
                                                        unsigned long)::$_37&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c47590
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_38&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_38&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_38&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c475e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c475f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c47610
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c47620
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_38::operator()((__38*)this, arg1);
    }

    // 0x100c47690
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c47800
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_39&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_39&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
                float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_39&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47850
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c47860
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c47880
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c47890
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        float->ClearDepthStencilTarget(unsigned int, unsigned int)::$_39::operator()((__39*)this, arg1);
    }

    // 0x100c47900
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39, void>(
        render::RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c47a70
    function<void(render::RenderContext&), 128ul, 16ul,
             (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float,
                                                                                  unsigned int, unsigned int)::$_40,
                                   void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*,
                                                                                        float, unsigned int,
                                                                                        unsigned int)::$_40&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                    unsigned int)::$_40,
                     void>(
                (render::RenderTargets const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_40&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::ClearDepthStencilTarget(
                                             render::RenderTargets const*, float, unsigned int, unsigned int)::$_40,
                                         void>(
            (render::RenderTargets const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_40&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                    unsigned int)::$_40,
                     void>(
                (render::RenderTargets const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_40&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47ac0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c47ad0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c47af0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c47b00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderTargets const*)
            ->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_40::operator()((__40*)this, arg1);
    }

    // 0x100c47b70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_40,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_40&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c47ce0
    function<void(render::RenderContext&), 128ul, 16ul,
             (Methods)0>::function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float,
                                                                                  unsigned int, unsigned int)::$_41,
                                   void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*,
                                                                                        float, unsigned int,
                                                                                        unsigned int)::$_41&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                    unsigned int)::$_41,
                     void>(
                (render::RenderTargets const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_41&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::ClearDepthStencilTarget(
                                             render::RenderTargets const*, float, unsigned int, unsigned int)::$_41,
                                         void>(
            (render::RenderTargets const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_41&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                                    unsigned int)::$_41,
                     void>(
                (render::RenderTargets const*)->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_41&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47d30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c47d40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c47d60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c47d70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderTargets const*)
            ->ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_41::operator()((__41*)this, arg1);
    }

    // 0x100c47de0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                       unsigned int)::$_41,
        void>(render::RenderContext::ClearDepthStencilTarget(render::RenderTargets const*, float, unsigned int,
                                                             unsigned int)::$_41&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c47f50
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
                (render::ShaderProgram const*)->SetShaders()::$_42&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
            (render::ShaderProgram const*)->SetShaders()::$_42&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
                (render::ShaderProgram const*)->SetShaders()::$_42&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c47f90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c47fa0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c47fb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c47fc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::ShaderProgram const*)->SetShaders()::$_42::operator()((__42*)this, arg1);
    }

    // 0x100c48030
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_42&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c481a0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
                (render::ShaderProgram const*)->SetShaders()::$_43&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
            (render::ShaderProgram const*)->SetShaders()::$_43&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
                (render::ShaderProgram const*)->SetShaders()::$_43&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c481e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c481f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c48200
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c48210
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::ShaderProgram const*)->SetShaders()::$_43::operator()((__43*)this, arg1);
    }

    // 0x100c48280
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43, void>(
        render::RenderContext::SetShaders(render::ShaderProgram const*)::$_43&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c483f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = *(uint64_t*)(arg1 + 32);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                             unsigned int const*, unsigned int const*)::$_44,
                     void>(unsigned int->SetVertexBuffers(render::VertexBuffer const* const*, unsigned int const*,
                                                          unsigned int const*)::$_44&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                             unsigned int const*, unsigned int const*)::$_44,
                     void>(unsigned int->SetVertexBuffers(render::VertexBuffer const* const*, unsigned int const*,
                                                          unsigned int const*)::$_44&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                             unsigned int const*, unsigned int const*)::$_44,
                     void>(unsigned int->SetVertexBuffers(render::VertexBuffer const* const*, unsigned int const*,
                                                          unsigned int const*)::$_44&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c48440
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c48450
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c48470
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c48480
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetVertexBuffers(render::VertexBuffer const* const*, unsigned int const*,
                                       unsigned int const*)::$_44::operator()((__44*)this, arg1);
    }

    // 0x100c48540
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_44,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_44&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c486b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = *(uint64_t*)(arg1 + 32);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                             unsigned int const*, unsigned int const*)::$_45,
                     void>(unsigned int->SetVertexBuffers(render::VertexBuffer const* const*, unsigned int const*,
                                                          unsigned int const*)::$_45&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                             unsigned int const*, unsigned int const*)::$_45,
                     void>(unsigned int->SetVertexBuffers(render::VertexBuffer const* const*, unsigned int const*,
                                                          unsigned int const*)::$_45&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                             unsigned int const*, unsigned int const*)::$_45,
                     void>(unsigned int->SetVertexBuffers(render::VertexBuffer const* const*, unsigned int const*,
                                                          unsigned int const*)::$_45&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c48700
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c48710
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c48730
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c48740
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetVertexBuffers(render::VertexBuffer const* const*, unsigned int const*,
                                       unsigned int const*)::$_45::operator()((__45*)this, arg1);
    }

    // 0x100c48800
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*, unsigned int const*,
                                                unsigned int const*)::$_45,
        void>(render::RenderContext::SetVertexBuffers(unsigned int, render::VertexBuffer const* const*,
                                                      unsigned int const*, unsigned int const*)::$_45&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c48970
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                            unsigned int)::$_46,
                     void>((render::VertexBuffer const*)->SetVertexBuffer(unsigned int, unsigned int)::$_46&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                            unsigned int)::$_46,
                     void>((render::VertexBuffer const*)->SetVertexBuffer(unsigned int, unsigned int)::$_46&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                            unsigned int)::$_46,
                     void>((render::VertexBuffer const*)->SetVertexBuffer(unsigned int, unsigned int)::$_46&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c489c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c489d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c489f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c48a00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::VertexBuffer const*)->SetVertexBuffer(unsigned int, unsigned int)::$_46::operator()((__46*)this, arg1);
    }

    // 0x100c48a70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_46&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c48be0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                            unsigned int)::$_47,
                     void>((render::VertexBuffer const*)->SetVertexBuffer(unsigned int, unsigned int)::$_47&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                            unsigned int)::$_47,
                     void>((render::VertexBuffer const*)->SetVertexBuffer(unsigned int, unsigned int)::$_47&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int,
                                                            unsigned int)::$_47,
                     void>((render::VertexBuffer const*)->SetVertexBuffer(unsigned int, unsigned int)::$_47&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c48c30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c48c40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c48c60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c48c70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::VertexBuffer const*)->SetVertexBuffer(unsigned int, unsigned int)::$_47::operator()((__47*)this, arg1);
    }

    // 0x100c48ce0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47, void>(
        render::RenderContext::SetVertexBuffer(render::VertexBuffer const*, unsigned int, unsigned int)::$_47&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c48e50
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
                (render::IndexBuffer const*)->SetIndexBuffer(unsigned int)::$_48&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
                (render::IndexBuffer const*)->SetIndexBuffer(unsigned int)::$_48&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
                (render::IndexBuffer const*)->SetIndexBuffer(unsigned int)::$_48&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c48ea0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c48eb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c48ed0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c48ee0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::IndexBuffer const*)->SetIndexBuffer(unsigned int)::$_48::operator()((__48*)this, arg1);
    }

    // 0x100c48f50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_48&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c490c0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
                (render::IndexBuffer const*)->SetIndexBuffer(unsigned int)::$_49&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
                (render::IndexBuffer const*)->SetIndexBuffer(unsigned int)::$_49&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
                (render::IndexBuffer const*)->SetIndexBuffer(unsigned int)::$_49&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49110
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c49120
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c49140
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c49150
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::IndexBuffer const*)->SetIndexBuffer(unsigned int)::$_49::operator()((__49*)this, arg1);
    }

    // 0x100c491c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49, void>(
        render::RenderContext::SetIndexBuffer(render::IndexBuffer const*, unsigned int)::$_49&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c49330
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
                (render::VertexDeclaration const*)->SetVertexDeclaration()::$_50&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
                (render::VertexDeclaration const*)->SetVertexDeclaration()::$_50&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
                (render::VertexDeclaration const*)->SetVertexDeclaration()::$_50&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49370
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c49380
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c49390
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c493a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::VertexDeclaration const*)->SetVertexDeclaration()::$_50::operator()((__50*)this, arg1);
    }

    // 0x100c49400
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_50&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c49570
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
                (render::VertexDeclaration const*)->SetVertexDeclaration()::$_51&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
                (render::VertexDeclaration const*)->SetVertexDeclaration()::$_51&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
                (render::VertexDeclaration const*)->SetVertexDeclaration()::$_51&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c495b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c495c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c495d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c495e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::VertexDeclaration const*)->SetVertexDeclaration()::$_51::operator()((__51*)this, arg1);
    }

    // 0x100c49640
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51, void>(
        render::RenderContext::SetVertexDeclaration(render::VertexDeclaration const*)::$_51&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c497b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_52&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                    render::SamplerState const*, bool)::$_52,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture const*, unsigned int,
                                                                 render::SamplerState const*, bool)::$_52&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                    render::SamplerState const*, bool)::$_52,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture const*, unsigned int,
                                                                 render::SamplerState const*, bool)::$_52&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                    render::SamplerState const*, bool)::$_52,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture const*, unsigned int,
                                                                 render::SamplerState const*, bool)::$_52&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49800
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_52&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c49810
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_52&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 40);
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        *(uint64_t*)((long)arg1 + 40) = uVar5;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c49830
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_52&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c49840
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_52&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetVSTextureSamplerPair(render::Texture const*, unsigned int, render::SamplerState const*,
                                              bool)::$_52::operator()((__52*)this, arg1);
    }

    // 0x100c49860
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_52,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_52&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c499d0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_53&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                    render::SamplerState const*, bool)::$_53,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture const*, unsigned int,
                                                                 render::SamplerState const*, bool)::$_53&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                    render::SamplerState const*, bool)::$_53,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture const*, unsigned int,
                                                                 render::SamplerState const*, bool)::$_53&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                                    render::SamplerState const*, bool)::$_53,
                     void>(unsigned int->SetVSTextureSamplerPair(render::Texture const*, unsigned int,
                                                                 render::SamplerState const*, bool)::$_53&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49a20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_53&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c49a30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_53&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 40);
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        *(uint64_t*)((long)arg1 + 40) = uVar5;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c49a50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_53&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c49a60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_53&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetVSTextureSamplerPair(render::Texture const*, unsigned int, render::SamplerState const*,
                                              bool)::$_53::operator()((__53*)this, arg1);
    }

    // 0x100c49a80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                       render::SamplerState const*, bool)::$_53,
        void>(render::RenderContext::SetVSTextureSamplerPair(unsigned int, render::Texture const*, unsigned int,
                                                             render::SamplerState const*, bool)::$_53&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c49bf0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_54&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                    render::SamplerState const*, bool)::$_54,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture const*, int,
                                                                 render::SamplerState const*, bool)::$_54&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                    render::SamplerState const*, bool)::$_54,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture const*, int,
                                                                 render::SamplerState const*, bool)::$_54&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                    render::SamplerState const*, bool)::$_54,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture const*, int,
                                                                 render::SamplerState const*, bool)::$_54&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49c40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_54&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c49c50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_54&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 40);
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        *(uint64_t*)((long)arg1 + 40) = uVar5;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c49c70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_54&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c49c80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_54&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetPSTextureSamplerPair(render::Texture const*, int, render::SamplerState const*,
                                              bool)::$_54::operator()((__54*)this, arg1);
    }

    // 0x100c49cc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_54,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_54&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c49e30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_55&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                    render::SamplerState const*, bool)::$_55,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture const*, int,
                                                                 render::SamplerState const*, bool)::$_55&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                    render::SamplerState const*, bool)::$_55,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture const*, int,
                                                                 render::SamplerState const*, bool)::$_55&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                                    render::SamplerState const*, bool)::$_55,
                     void>(unsigned int->SetPSTextureSamplerPair(render::Texture const*, int,
                                                                 render::SamplerState const*, bool)::$_55&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c49e80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_55&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c49e90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_55&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 40);
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        *(uint64_t*)((long)arg1 + 40) = uVar5;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c49eb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_55&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c49ec0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_55&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetPSTextureSamplerPair(render::Texture const*, int, render::SamplerState const*,
                                              bool)::$_55::operator()((__55*)this, arg1);
    }

    // 0x100c49f00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                       render::SamplerState const*, bool)::$_55,
        void>(render::RenderContext::SetPSTextureSamplerPair(unsigned int, render::Texture const*, int,
                                                             render::SamplerState const*, bool)::$_55&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4a070
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer const*)::$_56&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer const*)::$_56&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer const*)::$_56&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4a0c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4a0d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4a0f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4a100
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer const*)::$_56::operator()((__56*)this, arg1);
    }

    // 0x100c4a170
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_56&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4a2e0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer const*)::$_57&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer const*)::$_57&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<
            render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
            unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer const*)::$_57&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4a330
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4a340
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4a360
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4a370
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetVSShaderConstBuffer(render::ShaderConstBuffer const*)::$_57::operator()((__57*)this, arg1);
    }

    // 0x100c4a3e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57, void>(
        render::RenderContext::SetVSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_57&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4a550
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer const*)::$_58&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer const*)::$_58&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer const*)::$_58&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4a5a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4a5b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4a5d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4a5e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer const*)::$_58::operator()((__58*)this, arg1);
    }

    // 0x100c4a650
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_58&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4a7c0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer const*)::$_59&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer const*)::$_59&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<
            render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
            unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer const*)::$_59&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4a810
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4a820
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4a840
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4a850
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->SetPSShaderConstBuffer(render::ShaderConstBuffer const*)::$_59::operator()((__59*)this, arg1);
    }

    // 0x100c4a8c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59, void>(
        render::RenderContext::SetPSShaderConstBuffer(unsigned int, render::ShaderConstBuffer const*)::$_59&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4aa30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar6 = *(uint64_t*)(arg1 + 48);
        uint64_t uVar7 = *(uint64_t*)(arg1 + 56);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(uint64_t*)(this + 64) = uVar6;
        *(uint64_t*)(this + 72) = uVar7;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
                (render::DepthStencilState const*)->SetDepthStencilState()::$_60&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
                (render::DepthStencilState const*)->SetDepthStencilState()::$_60&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
                (render::DepthStencilState const*)->SetDepthStencilState()::$_60&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4aa90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4aaa0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 32);
        uint64_t uVar6 = *(uint64_t*)(this + 40);
        uint64_t uVar7 = *(uint64_t*)(this + 56);
        *(uint64_t*)((long)arg1 + 48) = *(uint64_t*)(this + 48);
        *(uint64_t*)((long)arg1 + 56) = uVar7;
        *(uint64_t*)((long)arg1 + 32) = uVar5;
        *(uint64_t*)((long)arg1 + 40) = uVar6;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c4aad0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4aae0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DepthStencilState const*)->SetDepthStencilState()::$_60::operator()((__60*)this, arg1);
    }

    // 0x100c4ab60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_60&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4acd0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar6 = *(uint64_t*)(arg1 + 48);
        uint64_t uVar7 = *(uint64_t*)(arg1 + 56);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(uint64_t*)(this + 64) = uVar6;
        *(uint64_t*)(this + 72) = uVar7;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
                (render::DepthStencilState const*)->SetDepthStencilState()::$_61&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
                (render::DepthStencilState const*)->SetDepthStencilState()::$_61&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
                (render::DepthStencilState const*)->SetDepthStencilState()::$_61&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4ad30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4ad40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 32);
        uint64_t uVar6 = *(uint64_t*)(this + 40);
        uint64_t uVar7 = *(uint64_t*)(this + 56);
        *(uint64_t*)((long)arg1 + 48) = *(uint64_t*)(this + 48);
        *(uint64_t*)((long)arg1 + 56) = uVar7;
        *(uint64_t*)((long)arg1 + 32) = uVar5;
        *(uint64_t*)((long)arg1 + 40) = uVar6;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c4ad70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4ad80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::DepthStencilState const*)->SetDepthStencilState()::$_61::operator()((__61*)this, arg1);
    }

    // 0x100c4ae00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61, void>(
        render::RenderContext::SetDepthStencilState(render::DepthStencilState const*)::$_61&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4af70
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = *(uint64_t*)(arg1 + 32);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
                (render::RasteriserState const*)->SetRasteriserState()::$_62&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
                (render::RasteriserState const*)->SetRasteriserState()::$_62&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
                (render::RasteriserState const*)->SetRasteriserState()::$_62&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4afc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4afd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c4aff0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4b000
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RasteriserState const*)->SetRasteriserState()::$_62::operator()((__62*)this, arg1);
    }

    // 0x100c4b080
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_62&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4b1f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = *(uint64_t*)(arg1 + 32);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
                (render::RasteriserState const*)->SetRasteriserState()::$_63&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
                (render::RasteriserState const*)->SetRasteriserState()::$_63&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
                (render::RasteriserState const*)->SetRasteriserState()::$_63&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4b240
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4b250
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c4b270
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4b280
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RasteriserState const*)->SetRasteriserState()::$_63::operator()((__63*)this, arg1);
    }

    // 0x100c4b300
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63, void>(
        render::RenderContext::SetRasteriserState(render::RasteriserState const*)::$_63&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4b470
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar6 = *(uint64_t*)(arg1 + 48);
        uint64_t uVar7 = *(uint64_t*)(arg1 + 56);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(uint64_t*)(this + 64) = uVar6;
        *(uint64_t*)(this + 72) = uVar7;
        uVar1 = *(uint64_t*)(arg1 + 72);
        *(uint64_t*)(this + 80) = *(uint64_t*)(arg1 + 64);
        *(uint64_t*)(this + 88) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
                (render::BlendState const*)->SetBlendState()::$_64&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
            (render::BlendState const*)->SetBlendState()::$_64&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
                (render::BlendState const*)->SetBlendState()::$_64&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4b4d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4b4e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 72);
        *(uint64_t*)((long)arg1 + 64) = *(uint64_t*)(this + 64);
        *(uint64_t*)((long)arg1 + 72) = uVar1;
        uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 32);
        uint64_t uVar6 = *(uint64_t*)(this + 40);
        uint64_t uVar7 = *(uint64_t*)(this + 56);
        *(uint64_t*)((long)arg1 + 48) = *(uint64_t*)(this + 48);
        *(uint64_t*)((long)arg1 + 56) = uVar7;
        *(uint64_t*)((long)arg1 + 32) = uVar5;
        *(uint64_t*)((long)arg1 + 40) = uVar6;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c4b510
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4b520
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::BlendState const*)->SetBlendState()::$_64::operator()((__64*)this, arg1);
    }

    // 0x100c4b5a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_64&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4b710
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar6 = *(uint64_t*)(arg1 + 48);
        uint64_t uVar7 = *(uint64_t*)(arg1 + 56);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(uint64_t*)(this + 64) = uVar6;
        *(uint64_t*)(this + 72) = uVar7;
        uVar1 = *(uint64_t*)(arg1 + 72);
        *(uint64_t*)(this + 80) = *(uint64_t*)(arg1 + 64);
        *(uint64_t*)(this + 88) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
                (render::BlendState const*)->SetBlendState()::$_65&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
            (render::BlendState const*)->SetBlendState()::$_65&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
                (render::BlendState const*)->SetBlendState()::$_65&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4b770
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4b780
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 72);
        *(uint64_t*)((long)arg1 + 64) = *(uint64_t*)(this + 64);
        *(uint64_t*)((long)arg1 + 72) = uVar1;
        uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 32);
        uint64_t uVar6 = *(uint64_t*)(this + 40);
        uint64_t uVar7 = *(uint64_t*)(this + 56);
        *(uint64_t*)((long)arg1 + 48) = *(uint64_t*)(this + 48);
        *(uint64_t*)((long)arg1 + 56) = uVar7;
        *(uint64_t*)((long)arg1 + 32) = uVar5;
        *(uint64_t*)((long)arg1 + 40) = uVar6;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c4b7b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4b7c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::BlendState const*)->SetBlendState()::$_65::operator()((__65*)this, arg1);
    }

    // 0x100c4b840
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65, void>(
        render::RenderContext::SetBlendState(render::BlendState const*)::$_65&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4b9b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_66&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_66&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_66&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4ba00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4ba10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4ba30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4ba40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::PrimitiveType)->DrawPrimitives(int, int)::$_66::operator()((__66*)this, arg1);
    }

    // 0x100c4ba90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_66&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4bc00
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_67&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_67&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
                (render::PrimitiveType)->DrawPrimitives(int, int)::$_67&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4bc50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4bc60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4bc80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4bc90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::PrimitiveType)->DrawPrimitives(int, int)::$_67::operator()((__67*)this, arg1);
    }

    // 0x100c4bce0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67, void>(
        render::RenderContext::DrawPrimitives(render::PrimitiveType, int, int)::$_67&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4be50
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&& arg1) {
        *(uint64_t*)this = 0;
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68::__68((__68*)(this + 16), (__68*)arg1);
        *(void (**)(...))(this + 144) = function<render::RenderContext::DrawMultiPrimitives(
                                                     render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
                                                 void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
                                                                                    int const*, int const*)::$_68,
                                         void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::DrawMultiPrimitives(
                                                     render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
                                                 void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4bef0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4bf00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68::__68(arg1, (__68*)this);
    }

    // 0x100c4bf70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4bf80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_68::operator()((__68*)this, arg1);
    }

    // 0x100c4c010
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_68,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_68&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4c180
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&& arg1) {
        *(uint64_t*)this = 0;
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69::__69((__69*)(this + 16), (__69*)arg1);
        *(void (**)(...))(this + 144) = function<render::RenderContext::DrawMultiPrimitives(
                                                     render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
                                                 void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int,
                                                                                    int const*, int const*)::$_69,
                                         void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::DrawMultiPrimitives(
                                                     render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
                                                 void>(
            (render::PrimitiveType)->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4c220
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4c230
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69::__69(arg1, (__69*)this);
    }

    // 0x100c4c2a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4c2b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::PrimitiveType)
            ->DrawMultiPrimitives(unsigned int, int const*, int const*)::$_69::operator()((__69*)this, arg1);
    }

    // 0x100c4c340
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*, int const*)::$_69,
        void>(render::RenderContext::DrawMultiPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                         int const*)::$_69&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4c4b0
    function<void(render::RenderContext&), 128ul, 16ul,
             (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                                unsigned int, render::IndexType)::$_70,
                                   void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType,
                                                                                      unsigned int, unsigned int,
                                                                                      render::IndexType)::$_70&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(
            this + 144) = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                                unsigned int, render::IndexType)::$_70,
                                   void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_70&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(
            ...))this = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                              unsigned int, render::IndexType)::$_70,
                                 void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_70&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(
            this + 152) = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                                unsigned int, render::IndexType)::$_70,
                                   void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_70&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4c500
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4c510
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4c530
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4c540
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::PrimitiveType)
            ->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_70::operator()((__70*)this, arg1);
    }

    // 0x100c4c590
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_70,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_70&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4c700
    function<void(render::RenderContext&), 128ul, 16ul,
             (Methods)0>::function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                                unsigned int, render::IndexType)::$_71,
                                   void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType,
                                                                                      unsigned int, unsigned int,
                                                                                      render::IndexType)::$_71&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(
            this + 144) = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                                unsigned int, render::IndexType)::$_71,
                                   void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_71&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(
            ...))this = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                              unsigned int, render::IndexType)::$_71,
                                 void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_71&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(
            this + 152) = function<render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int,
                                                                                unsigned int, render::IndexType)::$_71,
                                   void>(
            (render::PrimitiveType)->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_71&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4c750
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4c760
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4c780
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4c790
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::PrimitiveType)
            ->DrawIndexedPrimitives(unsigned int, unsigned int, render::IndexType)::$_71::operator()((__71*)this, arg1);
    }

    // 0x100c4c7e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                     render::IndexType)::$_71,
        void>(render::RenderContext::DrawIndexedPrimitives(render::PrimitiveType, unsigned int, unsigned int,
                                                           render::IndexType)::$_71&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4c950
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_72&& arg1) {
        *(uint64_t*)this = 0;
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                         render::IndexType)::$_72::__72((__72*)(this + 16), (__72*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void const* const*, render::IndexType)::$_72,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                                            render::IndexType)::$_72&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void const* const*, render::IndexType)::$_72,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                                            render::IndexType)::$_72&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void const* const*, render::IndexType)::$_72,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                                            render::IndexType)::$_72&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4c9f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_72&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4ca00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_72&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                         render::IndexType)::$_72::__72(arg1, (__72*)this);
    }

    // 0x100c4ca70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_72&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4ca80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_72&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                         render::IndexType)::$_72::operator()((__72*)this, arg1);
    }

    // 0x100c4cb10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_72,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_72&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4cc80
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_73&& arg1) {
        *(uint64_t*)this = 0;
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                         render::IndexType)::$_73::__73((__73*)(this + 16), (__73*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void const* const*, render::IndexType)::$_73,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                                            render::IndexType)::$_73&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void const* const*, render::IndexType)::$_73,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                                            render::IndexType)::$_73&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                       void const* const*, render::IndexType)::$_73,
                     void>((render::PrimitiveType)
                               ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                                            render::IndexType)::$_73&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4cd20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_73&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4cd30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_73&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                         render::IndexType)::$_73::__73(arg1, (__73*)this);
    }

    // 0x100c4cda0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_73&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4cdb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_73&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::PrimitiveType)
            ->DrawMultiIndexedPrimitives(unsigned int, int const*, void const* const*,
                                         render::IndexType)::$_73::operator()((__73*)this, arg1);
    }

    // 0x100c4ce40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                          void const* const*, render::IndexType)::$_73,
        void>(render::RenderContext::DrawMultiIndexedPrimitives(render::PrimitiveType, unsigned int, int const*,
                                                                void const* const*, render::IndexType)::$_73&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4cfb0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_74&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_74&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_74&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d000
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4d010
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4d030
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4d040
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->DispatchCompute(unsigned int, unsigned int)::$_74::operator()((__74*)this, arg1);
    }

    // 0x100c4d090
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4d200
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_75&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_75&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
                unsigned int->DispatchCompute(unsigned int, unsigned int)::$_75&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d250
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4d260
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4d280
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4d290
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->DispatchCompute(unsigned int, unsigned int)::$_75::operator()((__75*)this, arg1);
    }

    // 0x100c4d2e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75, void>(
        render::RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4d450
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) = function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
            unsigned int->MemoryBarrier()::$_76&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
            unsigned int->MemoryBarrier()::$_76&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
            unsigned int->MemoryBarrier()::$_76&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d490
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4d4a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4d4b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4d4c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->MemoryBarrier()::$_76::operator()((__76*)this, arg1);
    }

    // 0x100c4d4f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_76, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_76&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4d660
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) = function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
            unsigned int->MemoryBarrier()::$_77&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
            unsigned int->MemoryBarrier()::$_77&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
            unsigned int->MemoryBarrier()::$_77&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d6a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4d6b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4d6c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4d6d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->MemoryBarrier()::$_77::operator()((__77*)this, arg1);
    }

    // 0x100c4d700
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::MemoryBarrier(unsigned int)::$_77, void>(
        render::RenderContext::MemoryBarrier(unsigned int)::$_77&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4d710
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::RenderContext::FinishRendering()::$_78, void>(
            render::RenderContext::FinishRendering()::$_78&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::FinishRendering()::$_78, void>(
            render::RenderContext::FinishRendering()::$_78&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::FinishRendering()::$_78, void>(
            render::RenderContext::FinishRendering()::$_78&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d750
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4d760
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c4d770
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4d780
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::FinishRendering()::$_78::operator()((__78*)this, arg1);
    }

    // 0x100c4d7a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_78, void>(render::RenderContext::FinishRendering()::$_78&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4d7b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&& arg1) {
        *(uint64_t*)this = 0;
        Fence* pFVar1 = arg1.field_8;
        *(long*)(this + 16) = arg1.field_0;
        *(Fence**)(this + 24) = pFVar1;
        *(void (**)(...))(this + 144) = function<render::RenderContext::FinishRendering()::$_79, void>(
            render::RenderContext::FinishRendering()::$_79&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::FinishRendering()::$_79, void>(
            render::RenderContext::FinishRendering()::$_79&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::FinishRendering()::$_79, void>(
            render::RenderContext::FinishRendering()::$_79&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d7f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4d800
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4d810
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4d820
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::FinishRendering()::$_79::operator()((__79*)this, arg1);
    }

    // 0x100c4d850
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_79, void>(render::RenderContext::FinishRendering()::$_79&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4d860
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&& arg1) {
        *(uint64_t*)this = 0;
        *(RenderContext**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::RenderContext::FinishRendering()::$_80, void>(
            render::RenderContext::FinishRendering()::$_80&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::FinishRendering()::$_80, void>(
            render::RenderContext::FinishRendering()::$_80&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::FinishRendering()::$_80, void>(
            render::RenderContext::FinishRendering()::$_80&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4d8a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4d8b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c4d8c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4d8d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::FinishRendering()::$_80::operator()((__80*)this, arg1);
    }

    // 0x100c4d9d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FinishRendering()::$_80, void>(render::RenderContext::FinishRendering()::$_80&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4db40
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar6 = *(uint64_t*)(arg1 + 48);
        uint64_t uVar7 = *(uint64_t*)(arg1 + 56);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(uint64_t*)(this + 64) = uVar6;
        *(uint64_t*)(this + 72) = uVar7;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_81,
                     void>((render::Texture const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_81&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_81,
                     void>((render::Texture const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_81&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_81,
                     void>((render::Texture const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_81&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4dba0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4dbb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 32);
        uint64_t uVar6 = *(uint64_t*)(this + 40);
        uint64_t uVar7 = *(uint64_t*)(this + 56);
        *(uint64_t*)((long)arg1 + 48) = *(uint64_t*)(this + 48);
        *(uint64_t*)((long)arg1 + 56) = uVar7;
        *(uint64_t*)((long)arg1 + 32) = uVar5;
        *(uint64_t*)((long)arg1 + 40) = uVar6;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c4dbe0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4dbf0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::Texture const*)
            ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                   unsigned int, unsigned int, render::CubeFace)::$_81::operator()((__81*)this, arg1);
    }

    // 0x100c4dcc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_81,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_81&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4de30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar6 = *(uint64_t*)(arg1 + 48);
        uint64_t uVar7 = *(uint64_t*)(arg1 + 56);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(uint64_t*)(this + 64) = uVar6;
        *(uint64_t*)(this + 72) = uVar7;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_82,
                     void>((render::Texture const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_82&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_82,
                     void>((render::Texture const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_82&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, unsigned int, unsigned int,
                                                                 unsigned int, unsigned int, render::CubeFace)::$_82,
                     void>((render::Texture const*)
                               ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int,
                                                      unsigned int, unsigned int, unsigned int, unsigned int,
                                                      render::CubeFace)::$_82&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4de90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4dea0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 32);
        uint64_t uVar6 = *(uint64_t*)(this + 40);
        uint64_t uVar7 = *(uint64_t*)(this + 56);
        *(uint64_t*)((long)arg1 + 48) = *(uint64_t*)(this + 48);
        *(uint64_t*)((long)arg1 + 56) = uVar7;
        *(uint64_t*)((long)arg1 + 32) = uVar5;
        *(uint64_t*)((long)arg1 + 40) = uVar6;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c4ded0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4dee0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::Texture const*)
            ->CopyColourTargetData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                   unsigned int, unsigned int, render::CubeFace)::$_82::operator()((__82*)this, arg1);
    }

    // 0x100c4dfb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    unsigned int, render::CubeFace)::$_82,
        void>(render::RenderContext::CopyColourTargetData(render::Texture const*, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, unsigned int, unsigned int,
                                                          unsigned int, unsigned int, render::CubeFace)::$_82&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4e120
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&& arg1) {
        *(uint64_t*)this = 0;
        (render::RenderTargets const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_83::__83((__83*)(this + 16), (__83*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_83,
                     void>((render::RenderTargets const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_83&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_83,
                     void>((render::RenderTargets const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_83&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_83,
                     void>((render::RenderTargets const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_83&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4e1c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4e1d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::RenderTargets const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_83::__83(arg1, (__83*)this);
    }

    // 0x100c4e240
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4e250
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderTargets const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_83::operator()((__83*)this, arg1);
    }

    // 0x100c4e2d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_83,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_83&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4e440
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&& arg1) {
        *(uint64_t*)this = 0;
        (render::RenderTargets const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_84::__84((__84*)(this + 16), (__84*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_84,
                     void>((render::RenderTargets const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_84&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_84,
                     void>((render::RenderTargets const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_84&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                                    math::Rect<unsigned int> const&,
                                                                    math::Rect<unsigned int> const&)::$_84,
                     void>((render::RenderTargets const*)
                               ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                                         math::Rect<unsigned int> const&)::$_84&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4e4e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4e4f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (render::RenderTargets const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_84::__84(arg1, (__84*)this);
    }

    // 0x100c4e560
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4e570
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderTargets const*)
            ->ResolveColourTargetData(unsigned int, math::Rect<unsigned int> const&,
                                      math::Rect<unsigned int> const&)::$_84::operator()((__84*)this, arg1);
    }

    // 0x100c4e5f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                       math::Rect<unsigned int> const&,
                                                       math::Rect<unsigned int> const&)::$_84,
        void>(render::RenderContext::ResolveColourTargetData(render::RenderTargets const*, unsigned int,
                                                             math::Rect<unsigned int> const&,
                                                             math::Rect<unsigned int> const&)::$_84&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4e760
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(
        render::RenderContext::FlushTextureCache()::$_85&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::RenderContext::FlushTextureCache()::$_85, void>(
            render::RenderContext::FlushTextureCache()::$_85&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::FlushTextureCache()::$_85, void>(
            render::RenderContext::FlushTextureCache()::$_85&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::FlushTextureCache()::$_85, void>(
            render::RenderContext::FlushTextureCache()::$_85&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4e7a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4e7b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c4e7c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4e7d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::FlushTextureCache()::$_85::operator()((__85*)this, arg1);
    }

    // 0x100c4e800
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_85, void>(render::RenderContext::FlushTextureCache()::$_85&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4e970
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(
        render::RenderContext::FlushTextureCache()::$_86&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::RenderContext::FlushTextureCache()::$_86, void>(
            render::RenderContext::FlushTextureCache()::$_86&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::FlushTextureCache()::$_86, void>(
            render::RenderContext::FlushTextureCache()::$_86&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::FlushTextureCache()::$_86, void>(
            render::RenderContext::FlushTextureCache()::$_86&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4e9b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4e9c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c4e9d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4e9e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::FlushTextureCache()::$_86::operator()((__86*)this, arg1);
    }

    // 0x100c4ea10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::FlushTextureCache()::$_86, void>(render::RenderContext::FlushTextureCache()::$_86&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4eb80
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&& arg1) {
        *(uint64_t*)this = 0;
        (shared_ptr<OpenGLView> const&)->SetView()::$_87::__87((__87*)(this + 16), (__87*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
                (shared_ptr<OpenGLView> const&)->SetView()::$_87&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_87&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
                (shared_ptr<OpenGLView> const&)->SetView()::$_87&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4ec00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4ec10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_87::__87(arg1, (__87*)this);
    }

    // 0x100c4ec60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4ec70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_87::operator()((__87*)this, arg1);
    }

    // 0x100c4ecb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c4ecc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_87::~__87((__87*)this);
    }

    // 0x100c4ee30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&& arg1) {
        *(uint64_t*)this = 0;
        (shared_ptr<OpenGLView> const&)->SetView()::$_88::__88((__88*)(this + 16), (__88*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
                (shared_ptr<OpenGLView> const&)->SetView()::$_88&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_88&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
                (shared_ptr<OpenGLView> const&)->SetView()::$_88&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4eeb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4eec0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_88::__88(arg1, (__88*)this);
    }

    // 0x100c4ef10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4ef20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_88::operator()((__88*)this, arg1);
    }

    // 0x100c4ef60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c4ef70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88, void>(
        render::RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_88::~__88((__88*)this);
    }

    // 0x100c4ef80
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::RenderContext::OnDeviceLost()::$_89, void>(
            render::RenderContext::OnDeviceLost()::$_89&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::OnDeviceLost()::$_89, void>(
            render::RenderContext::OnDeviceLost()::$_89&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::OnDeviceLost()::$_89, void>(
            render::RenderContext::OnDeviceLost()::$_89&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4efc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4efd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c4efe0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4eff0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::OnDeviceLost()::$_89::operator()((__89*)this, arg1);
    }

    // 0x100c4f020
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::OnDeviceLost()::$_89, void>(render::RenderContext::OnDeviceLost()::$_89&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4f190
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)&arg1.field_8;
        *(long*)(this + 16) = arg1.field_0;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
            (render::VSyncMode)->SetVSyncMode()::$_90&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
            (render::VSyncMode)->SetVSyncMode()::$_90&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
            (render::VSyncMode)->SetVSyncMode()::$_90&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4f1d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4f1e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4f1f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4f200
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::VSyncMode)->SetVSyncMode()::$_90::operator()((__90*)this, arg1);
    }

    // 0x100c4f230
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_90&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c4f3a0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)&arg1.field_8;
        *(long*)(this + 16) = arg1.field_0;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
            (render::VSyncMode)->SetVSyncMode()::$_91&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
            (render::VSyncMode)->SetVSyncMode()::$_91&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
            (render::VSyncMode)->SetVSyncMode()::$_91&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c4f3e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c4f3f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c4f400
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c4f410
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::VSyncMode)->SetVSyncMode()::$_91::operator()((__91*)this, arg1);
    }

    // 0x100c4f440
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91, void>(
        render::RenderContext::SetVSyncMode(render::VSyncMode)::$_91&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c500b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = arg1.field_8;
        *(uint64_t*)(this + 16) = arg1.field_0;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) = function<render::RenderContext::ResetDeferredFrames()::$_94, void>(
            render::RenderContext::ResetDeferredFrames()::$_94&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::ResetDeferredFrames()::$_94, void>(
            render::RenderContext::ResetDeferredFrames()::$_94&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::ResetDeferredFrames()::$_94, void>(
            render::RenderContext::ResetDeferredFrames()::$_94&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c500f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c50100
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c50110
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c50120
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ResetDeferredFrames()::$_94, void>(
        render::RenderContext::ResetDeferredFrames()::$_94&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::ResetDeferredFrames()::$_94::operator()((__94*)this, arg1);
    }

    // 0x100c501f0
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
        render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
        lambda(BaseApp*) #1
    }
    , void > (render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
          lambda(BaseApp*) #1
      } && arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
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
*(void (**)(...))this =
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
*(void (**)(...))(this + 152) =
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

// 0x100c50230
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(BaseApp*) #1
}
, void > (render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)
              const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    function < render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
                   const ::{
        lambda(BaseApp*) #1
    }
    , void > (render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()((_lambda_void__void___1_*)this, arg1, arg2);
}

// 0x100c50240
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(BaseApp*) #1
}
, void > (render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)
              const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    uint64_t uVar1 = *(uint64_t*)(this + 8);
    *(uint64_t*)arg1 = *(uint64_t*)this;
    *(uint64_t*)((long)arg1 + 8) = uVar1;
}

// 0x100c50250
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(BaseApp*) #1
}
, void > (render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)
              const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::__invoke(void* arg1, BaseApp* baseApp) {
    function < render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
                   const ::{
        lambda(BaseApp*) #1
    }
    , void > (render::RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()((_lambda_void__jag__BaseApp___1_*)this, arg1, baseApp);
}

// 0x100c50260
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(BaseApp*) #1
}
, void > (render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)
              const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::operator()(void* arg1, BaseApp * baseApp) const {
    const ::{
        lambda(BaseApp*) #1
    }
    ::operator()((_lambda_jag__BaseApp___1_*)this, arg1);
}

// 0x100c502c0
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&) const ::{
    lambda(BaseApp*) #1
}
, void > (render::RenderContext::ResetDeferredFrames()::$_94::operator()(render::RenderContext&)
              const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100c502d0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::RenderContext::ResetDeferredFrames()::$_94, void>(render::RenderContext::ResetDeferredFrames()::$_94&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100c99600
function<void(BaseApp*), 128ul, 16ul, (Methods)0>* function<void(BaseApp*), 128ul, 16ul, (Methods)0>::operator=(
    function<void(BaseApp*), 128ul, 16ul, (Methods)0> const& callback) {
    clean(this);
    *(uint64_t*)this = *(uint64_t*)callback;
    *(uint64_t*)(this + 144) = *(uint64_t*)(callback + 144);
    *(uint64_t*)(this + 152) = *(uint64_t*)(callback + 152);
    if (operator_cast_to_bool() != '\0') {
        copy((function<void(BaseApp*), 128ul, 16ul, (Methods)0>*)callback, this + 16);
    }
    return this;
}

// 0x100c9a1a0
function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
    BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
    BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&& arg1) {
    *(uint64_t*)this = 0;
    uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
    *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
    *(uint64_t*)(this + 24) = uVar1;
    *(void (**)(...))(this + 144) =
        function<BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0,
                 void>(
            (function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)->RunSynchronousMainThreadEvent()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0,
                 void>(
            (function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)->RunSynchronousMainThreadEvent()::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__;
    *(void (**)(...))(this + 152) =
        function<BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0,
                 void>(
            (function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)->RunSynchronousMainThreadEvent()::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100c9a2b0
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::clean() {
    if (operator_cast_to_bool() != '\0') {
        destruct();
        *(uint64_t*)this = 0;
    }
}

} // namespace jag::fixedfunction

namespace jag {
    template <typename...> // 1 instantiations, e.g. <render::DeferredFrameData>
    class MultiBuffer {
    public:
        MultiBuffer();
    };

    // 0x100c3e7d0
    MultiBuffer<render::DeferredFrameData>::MultiBuffer() {}

    // 0x100c3eb90
    BarrierWithCompletion<DefaultBarrierCompletionFunction>::BarrierWithCompletion(
        unsigned long arg1, DefaultBarrierCompletionFunction defaultBarrierCompletionFunction)
        : std::mutex() {
        new ((this + 64)) std::condition_variable();
        *(unsigned long*)(this + 112) = arg1;
        *(unsigned long*)(this + 120) = arg1;
        *(uint64_t*)(this + 128) = 0;
        *(uint64_t*)(this + 144) = 0;
    }

    // 0x100c3ec50
    BarrierWithCompletion<DefaultBarrierCompletionFunction>::~BarrierWithCompletion() {
        ForceOpen(this);
        ((this + 64))->~condition_variable();
    }

    // 0x100c3ecb0
    void BarrierWithCompletion<DefaultBarrierCompletionFunction>::Wait() {
        uint64_t local_20;

        unique_lock<std::mutex> local_30(*this);
        if (WaitInner(this, &local_30) == '\0') {
            *(long*)(this + 120) = *(long*)(this + 120) - 1;
            local_20 = *(uint64_t*)(this + 128);
            ((this + 64))
                ->wait<BarrierWithCompletion<DefaultBarrierCompletionFunction>::Wait()::_lambda() _1_>(&local_30,
                                                                                                       &local_20);
        }
    }

    // 0x100c3ed30
    bool BarrierWithCompletion<DefaultBarrierCompletionFunction>::WaitInner(std::unique_lock<std::mutex>& unique_lock) {
        long lVar1 = *(long*)(this + 120);
        if (lVar1 == 1) {
            *(long*)(this + 128) = *(long*)(this + 128) + 1;
            *(uint64_t*)(this + 120) = *(uint64_t*)(this + 112);
            ((this + 136))->~AutoSingleton();
            unique_lock.unlock();
            std::condition_variable::notify_all();
        }
        return lVar1 == 1;
    }

} // namespace jag

namespace jag::render {
    class KeepAliveSharedPtrAndOwner {
    public:
        bool operator==(const KeepAliveSharedPtrAndOwner& midiRequest1) const;
        ~KeepAliveSharedPtrAndOwner();
        KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner&& arg1);
        KeepAliveSharedPtrAndOwner(const KeepAliveSharedPtrAndOwner& event);
        bool operator==(const void* arg1) const;

    private:
        uint8_t _unknown_0[8];
        uint64_t field_8;
        Name field_16;
        uint8_t _unknown_20[4];
    };

    // 0x100c3eb10
    DeferredFrameData::~DeferredFrameData() {
        field_368.~hash_set();
        field_312.~hash_set();
        field_272.~VectorFastPool();
        field_232.~VectorFastPool();
        field_192.~VectorFastPool();
        field_152.~VectorFastPool();
        field_144->~SyncFence();
        field_112.~vector();
        field_80.~vector();
    }

    // 0x100c3f960
    DeferredRenderFunction::DeferredRenderFunction(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback)
        : fixedfunction::function(callback) {}

    // 0x100c50070
    bool KeepAliveSharedPtrAndOwner::operator==(const void* arg1) const {
        return (void*)end() == arg1;
    }

} // namespace jag::render
