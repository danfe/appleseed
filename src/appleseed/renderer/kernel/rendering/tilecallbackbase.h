
//
// This source file is part of appleseed.
// Visit http://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2010-2013 Francois Beaune, Jupiter Jazz Limited
// Copyright (c) 2014-2017 Francois Beaune, The appleseedhq Organization
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifndef APPLESEED_RENDERER_KERNEL_RENDERING_TILECALLBACKBASE_H
#define APPLESEED_RENDERER_KERNEL_RENDERING_TILECALLBACKBASE_H

// appleseed.renderer headers.
#include "renderer/kernel/rendering/itilecallback.h"

// appleseed.foundation headers.
#include "foundation/platform/compiler.h"

// Standard headers.
#include <cstddef>

// Forward declarations.
namespace renderer  { class Frame; }

namespace renderer
{

//
// A convenient base class for tile callbacks.
//

class TileCallbackBase
  : public ITileCallback
{
  public:
    void on_tiled_frame_begin(const Frame* frame) override
    {
    }

    void on_tiled_frame_end(const Frame* frame) override
    {
    }

    void on_tile_begin(
        const Frame*    frame,
        const size_t    tile_x,
        const size_t    tile_y) override
    {
    }

    void on_tile_end(
        const Frame*    frame,
        const size_t    tile_x,
        const size_t    tile_y) override
    {
    }

    void on_progressive_frame_begin(const Frame* frame) override
    {
    }

    void on_progressive_frame_end(const Frame* frame) override
    {
    }
};

}       // namespace renderer

#endif  // !APPLESEED_RENDERER_KERNEL_RENDERING_TILECALLBACKBASE_H
