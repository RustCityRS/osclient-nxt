// libs/core/debug/Assert.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag {
    // 0x100c92b50
    void InlineFatalBreak() {
        void* pcVar1 = (void (*)(...))invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100c92b50: ref_counter_base::~ref_counter_base() has the same machine code as InlineFatalBreak()

    // 0x100c92b50: LoadingScreenScript::AnimLayer::~AnimLayer() has the same machine code as InlineFatalBreak()

    // 0x100c92b50: LoadingScreenScript::~LoadingScreenScript() has the same machine code as InlineFatalBreak()

} // namespace jag

namespace jag::ui {
    // 0x100c92b50: UIHookProperties::~UIHookProperties() has the same machine code as InlineFatalBreak()

    // 0x100c92b50: ComponentMultiValueMixin::~ComponentMultiValueMixin() has the same machine code as InlineFatalBreak()

    // 0x100c92b50: ComponentSingleValueMixin::~ComponentSingleValueMixin() has the same machine code as InlineFatalBreak()

    // 0x100c92b50: ComponentSingleValueMultiOptionMixin::~ComponentSingleValueMultiOptionMixin() has the same machine code as InlineFatalBreak()

} // namespace jag::ui

namespace jag::graphics {
    // 0x100c92b50: DrawableBatchRenderer::~DrawableBatchRenderer() has the same machine code as InlineFatalBreak()

    // 0x100c92b50: AnimCurveSegmentCacheBase::~AnimCurveSegmentCacheBase() has the same machine code as InlineFatalBreak()

} // namespace jag::graphics

namespace jag::oldscape::sound {
    // 0x100c92b50: PCMPlayerFactory::~PCMPlayerFactory() has the same machine code as InlineFatalBreak()

    // 0x100c92b50: PCMPlayerMainThread::~PCMPlayerMainThread() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::sound

namespace jag::hal::audio {
    // 0x100c92b50: SampleReadable::~SampleReadable() has the same machine code as InlineFatalBreak()

} // namespace jag::hal::audio

namespace jag::game {
    // 0x100c92b50: BaseConfigTypeList::~BaseConfigTypeList() has the same machine code as InlineFatalBreak()

} // namespace jag::game

namespace jag::input::gesture {
    // 0x100c92b50: GestureBase::~GestureBase() has the same machine code as InlineFatalBreak()

} // namespace jag::input::gesture

namespace jag::logger {
    // 0x100c92b50: Sink::~Sink() has the same machine code as InlineFatalBreak()

} // namespace jag::logger

namespace jag::oldscape::dash3d {
    // 0x100c92b50: UniqueModelSource::~UniqueModelSource() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::dash3d

namespace jag::oldscape::option {
    // 0x100c92b50: IScriptOption::~IScriptOption() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::option
