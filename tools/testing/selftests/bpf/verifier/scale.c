{
	"scale: scale test 1",
	.insns = { },
	.data = { },
	.fill_helper = bpf_fill_scale,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 1,
},
{
	"scale: scale test 2",
	.insns = { },
	.data = { },
	.fill_helper = bpf_fill_scale,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 2,
},
