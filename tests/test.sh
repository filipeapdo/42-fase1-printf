RCol='\033[0m'
Red='\033[33;31m';
Gre='\033[33;32m';

diff_result=$(diff tests/expected.log tests/result.log)
if [[ -z $diff_result ]]; then
	echo -n -e "${Gre}OK ${RCol}"
else
	echo -n -e "${Red}KO ${RCol}"
fi

diff_valgrind_result=$(diff tests/valgrind_expected.log tests/valgrind_result.log)
if [[ ! -z $diff_valgrind_result ]]; then
	echo -e "${Red}Memory Leak ${RCol}"
fi
