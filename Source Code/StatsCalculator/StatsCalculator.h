#ifndef STATSCALCULATOR_H
#define STATSCALCULATOR_H
class DocumentStatistics;
class Document;


class StatsCalculator
{
private:
  /* data */
public:
  DocumentStatistics& calculate(Document& doc);
  StatsCalculator();
  ~StatsCalculator();
};

StatsCalculator::StatsCalculator(/* args */)
{
}

StatsCalculator::~StatsCalculator()
{
}


#endif