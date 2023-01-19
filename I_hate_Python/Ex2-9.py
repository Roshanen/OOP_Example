day_in_month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


def check_day(day, month, year):
    return day_in_month[month] + 1 >= day if month == 2 and is_leap(year) else day_in_month[month] >= day


def check_month(month):
    return 0 < month < 13


def check_year(year):
    return year > 0


def check_date(date):
    return check_day(date[0], date[1], date[2]) and check_month(date[1]) and check_year(date[2])


def day_of_year(date):
    return int(date[0]) + sum(day_in_month[:date[1]]) + (is_leap(date[2])if int(date[1]) > 2 else 0)


def day_in_year(year):
    return 365 + is_leap(year)


def is_leap(year):
    return ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)


def diff_from_year(year1, year2):
    return sum([day_in_year(i) for i in range(year1, year2)])


def date_diff(date1, date2):
    date1 = [int(x) for x in date1.split("-")]
    date2 = [int(x) for x in date2.split("-")]
    if check_date(date1) and check_date(date2):
        return day_of_year(date2) - day_of_year(date1) + diff_from_year(date1[2], date2[2]) + 1
    else:
        return -1


print(date_diff("1-1-1999", "1-1-2000"))
