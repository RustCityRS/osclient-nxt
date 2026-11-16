// libs/game/runetek5/fullscreen/Fullscreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::fullscreen {
    // 0x1004c29e0
    void GetNumAvailableResolutions(const render::RenderContext& renderContext) {
        return Window::SupportsFullScreen();
    }

    // 0x1004c29f0
    void GetAvailableResolution(int& arg1, int& arg2, int arg3, const render::RenderContext& renderContext) {
        long lVar1;
        uint64_t uVar2;

        if (arg3 < 0) {
            arg2 = 0;
            arg1 = 0;
        } else {
            lVar1 = renderContext.GetDesc();
            uVar2 = ((OpenGLView*)(*((lVar1 + 16))).operator->())->GetNativeFullscreenResolution();
            arg1 = (int)uVar2;
            arg2 = (int)((unsigned long)uVar2 >> 32);
        }
    }

    // 0x1004c2a40
    void EnterFullscreen(int arg1, int arg2, render::RenderContext& renderContext) {
        bool cVar1;
        uint32_t uVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;

        long lVar3 = renderContext.GetDesc();
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*((lVar3 + 16))).operator->();
        auto this_00 = end();
        if (this_00 == nullptr) {
            uVar2 = 0;
        } else {
            ((OpenGLView*)(*((lVar3 + 16))).operator->())->SetFullScreenResolution(arg1, arg2);
            cVar1 = this_00->IsFullScreen();
            uVar2 = this_00->SetFullScreen(true);
            if (((char)uVar2 != '\0') && (cVar1)) {
                renderContext.UpdateBackBufferSize(false);
            }
        }
        return uVar2;
    }

    // 0x1004c2ae0
    void ExitFullscreen(const render::RenderContext& renderContext) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;

        long lVar1 = renderContext.GetDesc();
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*((lVar1 + 16))).operator->();
        auto this_00 = end();
        if (this_00 != nullptr) {
            this_00->SetFullScreen(false);
        }
    }

    // 0x1004c2b10
    void IsFullScreen(const render::RenderContext& renderContext) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;

        long lVar1 = renderContext.GetDesc();
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*((lVar1 + 16))).operator->();
        auto this_00 = end();
        if (this_00 == nullptr) {
            return 0;
        }
        return this_00->IsFullScreen();
    }

} // namespace jag::game::fullscreen
