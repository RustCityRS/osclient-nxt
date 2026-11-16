// libs/game/runetek5/fullscreen/Fullscreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::fullscreen {
    // 0x1004c29e0, 16 bytes, placed by class name and debug map
    // GetNumAvailableResolutions(render::RenderContext const&)
    undefined1 GetNumAvailableResolutions(RenderContext* param_1) {
        return Window::SupportsFullScreen();
    }

    // 0x1004c29f0, 80 bytes, placed by class name and debug map
    // GetAvailableResolution(int&, int&, int, render::RenderContext const&)
    void GetAvailableResolution(int* param_1, int* param_2, int param_3, RenderContext* param_4) {
        long lVar1;
        OpenGLView* this;
        undefined8 uVar2;

        if (param_3 < 0) {
            *param_2 = 0;
            *param_1 = 0;
        } else {
            lVar1 = param_4->GetDesc();
            this = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)(lVar1 + 16));
            uVar2 = GetNativeFullscreenResolution();
            *param_1 = (int)uVar2;
            *param_2 = (int)((ulong)uVar2 >> 32);
        }
    }

    // 0x1004c2a40, 160 bytes, placed by class name and debug map
    // EnterFullscreen(int, int, render::RenderContext&)
    undefined4 EnterFullscreen(int param_1, int param_2, RenderContext* param_3) {
        char cVar1;
        undefined4 uVar2;
        long lVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        Window* this_00;
        OpenGLView* this_01;

        lVar3 = param_3->GetDesc();
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)shared_ptr<OpenGLView>::operator->(
            (shared_ptr<OpenGLView>*)(lVar3 + 16));
        this_00 = (Window*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
        if (this_00 == (Window*)0) {
            uVar2 = 0;
        } else {
            this_01 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)(lVar3 + 16));
            this_01->SetFullScreenResolution(param_1, param_2);
            cVar1 = this_00->IsFullScreen();
            uVar2 = this_00->SetFullScreen(true);
            if (((char)uVar2 != '\0') && (cVar1 != '\0')) {
                param_3->UpdateBackBufferSize(false);
            }
        }
        return uVar2;
    }

    // 0x1004c2ae0, 48 bytes, placed by class name and debug map
    // ExitFullscreen(render::RenderContext const&)
    void ExitFullscreen(RenderContext* param_1) {
        long lVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        Window* this_00;

        lVar1 = param_1->GetDesc();
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)shared_ptr<OpenGLView>::operator->(
            (shared_ptr<OpenGLView>*)(lVar1 + 16));
        this_00 = (Window*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
        if (this_00 != (Window*)0) {
            this_00->SetFullScreen(false);
        }
    }

    // 0x1004c2b10, 48 bytes, placed by class name and debug map
    // IsFullScreen(render::RenderContext const&)
    undefined8 IsFullScreen(RenderContext* param_1) {
        long lVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        Window* this_00;

        lVar1 = param_1->GetDesc();
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)shared_ptr<OpenGLView>::operator->(
            (shared_ptr<OpenGLView>*)(lVar1 + 16));
        this_00 = (Window*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
        if (this_00 == (Window*)0) {
            return 0;
        }
        return this_00->IsFullScreen();
    }

} // namespace jag::game::fullscreen
