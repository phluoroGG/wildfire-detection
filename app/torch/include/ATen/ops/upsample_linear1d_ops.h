#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API upsample_linear1d_vec {
  using schema = at::Tensor (const at::Tensor &, at::OptionalSymIntArrayRef, bool, c10::optional<at::ArrayRef<double>>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::upsample_linear1d")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "vec")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "upsample_linear1d.vec(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors) -> Tensor")
  static at::Tensor call(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors);
};

struct TORCH_API upsample_linear1d_out {
  using schema = at::Tensor & (const at::Tensor &, c10::SymIntArrayRef, bool, c10::optional<double>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::upsample_linear1d")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "upsample_linear1d.out(Tensor self, SymInt[1] output_size, bool align_corners, float? scales=None, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales, at::Tensor & out);
};

struct TORCH_API upsample_linear1d {
  using schema = at::Tensor (const at::Tensor &, c10::SymIntArrayRef, bool, c10::optional<double>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::upsample_linear1d")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "upsample_linear1d(Tensor self, SymInt[1] output_size, bool align_corners, float? scales=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales);
};

}} // namespace at::_ops