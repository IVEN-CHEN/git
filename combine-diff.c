#include "sha1-array.h"
static struct combine_diff_path *intersect_paths(struct combine_diff_path *curr, int n, int num_parent)
	int i, cmp;
	int abbrev = opt->flags.full_index ? GIT_SHA1_HEXSZ : DEFAULT_ABBREV;
	if (added)
		dump_quoted_path("--- ", "", "/dev/null",
				 line_prefix, c_meta, c_reset);
	else
		dump_quoted_path("--- ", a_prefix, elem->path,
				 line_prefix, c_meta, c_reset);
	const struct oid_array *parents, struct diff_options *opt)
		paths = intersect_paths(paths, i, num_parent);
		paths = find_paths_generic(oid, parents, &diffopts);