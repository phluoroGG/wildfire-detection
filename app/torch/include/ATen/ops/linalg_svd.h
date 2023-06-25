#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/linalg_svd_ops.h>

namespace at {


// aten::linalg_svd(Tensor A, bool full_matrices=True, *, str? driver=None) -> (Tensor U, Tensor S, Tensor Vh)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor> linalg_svd(const at::Tensor & A, bool full_matrices=true, c10::optional<c10::string_view> driver=c10::nullopt) {
    return at::_ops::linalg_svd::call(A, full_matrices, driver);
}

// aten::linalg_svd.U(Tensor A, bool full_matrices=True, *, str? driver=None, Tensor(a!) U, Tensor(b!) S, Tensor(c!) Vh) -> (Tensor(a!) U, Tensor(b!) S, Tensor(c!) Vh)
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> linalg_svd_out(at::Tensor & U, at::Tensor & S, at::Tensor & Vh, const at::Tensor & A, bool full_matrices=true, c10::optional<c10::string_view> driver=c10::nullopt) {
    return at::_ops::linalg_svd_U::call(A, full_matrices, driver, U, S, Vh);
}
// aten::linalg_svd.U(Tensor A, bool full_matrices=True, *, str? driver=None, Tensor(a!) U, Tensor(b!) S, Tensor(c!) Vh) -> (Tensor(a!) U, Tensor(b!) S, Tensor(c!) Vh)
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> linalg_svd_outf(const at::Tensor & A, bool full_matrices, c10::optional<c10::string_view> driver, at::Tensor & U, at::Tensor & S, at::Tensor & Vh) {
    return at::_ops::linalg_svd_U::call(A, full_matrices, driver, U, S, Vh);
}

}
