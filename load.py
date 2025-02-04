from datasets import load_from_disk, Dataset
dataset: Dataset = load_from_disk("exebench-hf-O0-eval")["test_real"]
newds = dataset.select_columns(['func_def', 'hex-rays', 'ghidra', 'real_deps'])

for idx, d in enumerate(newds):
  #print(d)
  if any(v is None for v in d.values()): continue

  deps = d["real_deps"] + "\n"

  open(f"out/func_def-{idx}.c", "w").write(deps + d["func_def"])
  open(f"out/hex-rays-{idx}.c", "w").write(deps+'#include "defs.h"\n' + d["hex-rays"])
  open(f"out/ghidra-{idx}.c", "w").write(deps+d["ghidra"])
